/* -------------------------------------------------------------------------
 * Copyright (c) 2024  Fabio Souto de Azevedo      <fabio.azevedo@ufrgs.br>
 *                     Guilherme Fiorin Fornel     <gffrnl@gmail.com>
 *                     Matheus Correa dos Santos   <matheus.santos@ufrgs.br>
 *                     Esequia Sauter              <esequia.sauter@ufrgs.br>
 *
 * All rights reserved.
 *
 * Licensed under the MIT License. See LICENSE in the project root for
 * license information.
 * ------------------------------------------------------------------------- */

#include <cmath>
#include "../include/gcikpi.hpp"

extern "C" {
    double
    gzed_cosine_integral_pi_coef(unsigned k, double alpha, double deltax) {
        return GzedCosineIntegralskPi(alpha, deltax)(k);
    }
}
