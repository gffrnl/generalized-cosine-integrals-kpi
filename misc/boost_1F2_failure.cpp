// Copyright (C) 2024  Guilherme F. Fornel <gffrnl@gmail.com>0
//
// Prints the maximum value of k for which boost's pFq succeeds in the
// computation of 1F2((alpha+1)/2, 1/2, (3+alpha)/2, -(k*pi)^2/4)
//
// Compile with g++ -std=c++17 -Wall -Wpedantic boost_1F2_failure.cpp -o boost_1F2_failure
//
// Usage: $ ./boost_1F2_failure n
//        - where n is the number of divisions of the inteval (0, 2)
//        - n must be greater than 1
//        - if n is omitted then it is taken equal to 10
//

#include <iostream>
#include <boost/math/special_functions/hypergeometric_pFq.hpp>

int main(int argc, char * argv[]) {
    using std::cout;
    using std::cerr;
    using std::endl;

    std::ptrdiff_t const n = (argc > 1) ? std::atoi(argv[1]) : 10;
    if (n < 2) {
        cout << "Usage:\n";
        cout << "./boost_1F2_failure [n]\n";
        cout << "  - where n is the number of divisions "
                "of the inteval (0, 2)\n";
        cout << "  - n must be greater than 1\n";
        cout << "  - if n is omitted then it is taken equal to 10\n";
        return EXIT_FAILURE;
    }

    std::size_t const n0 = std::abs(n);
    double const delta_alpha = (2.0 - 0.0) / (n0 - 1);

    for (std::size_t j{0}; j < n0; ++j) {
        double const alpha = j * delta_alpha;

        cout << "\nalpha = " << alpha;
        cout << "\n====================" << endl;
        
        double const a1 = (alpha + 1.0) / 2.0;
        double const b1 = 0.5;
        double const b2 = (alpha + 3.0) / 2.0;
        double const mult = - M_PI * M_PI / 4.0;

        std::size_t kmax = 100;
        double xmax = -99999.99999;
        for (std::size_t k{1}; k <= kmax; ++k) {
            try {
                double x =
                        boost::math::hypergeometric_pFq<double>({a1},
                                                                {b1, b2},
                                                                mult * k * k);
                xmax = x;
            } catch (boost::wrapexcept<boost::math::evaluation_error> const & e) {
                kmax = k - 1;
                cout << "\terror message: " << e.what() << '\n' << endl;
            }
        }
        cout << "\tkmax = " << kmax << endl;
        cout << "\txmax = " << xmax << endl;
    }

    return EXIT_SUCCESS;
}
