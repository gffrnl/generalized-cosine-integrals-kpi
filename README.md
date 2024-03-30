# generalized-cosine-integrals-kpi
An accurate numerical method for the computation of a class of generalized cosine integrals.

### Authors:
* [Fabio Souto de Azevedo](https://github.com/fazedo)          &emsp;&emsp;                                (<fabio.azevedo@ufrgs.br>)
* [Guilherme F. Fornel](https://github.com/gffrnl)             &emsp;&emsp;&emsp;&emsp;                    (<gffrnl@gmail.com>)
* Matheus Correa dos Santos                                    &nbsp;                                      (<matheus.santos@ufrgs.br>)
* [Esequia Sauter](https://github.com/Esequia)                 &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;  (<esequia.sauter@ufrgs.br>)

---
### Usage:
  If you're using C++, you can only copy the header [``gcikpi.hpp``](https://github.com/gffrnl/generalized-cosine-integrals-kpi/blob/main/include/gcikpi.hpp) in the folder ``ìnclude``.<br>
  To use the Python interface, you must compile the source into a shared library ``libgcikpi.so`` on Linux platforms.

### Requirements:
  - C++17 compatible compiler.
  - [CMake](https://cmake.org/) version 3.12 or higher.

  If you want to use the Python interface, also:
  - [Python](https://www.python.org/) 3 interpreter with support to:
      - [Jupyter](https://jupyter.org/) Notebooks.
      - [NumPy](https://numpy.org/).
      - [Matplotlib](https://matplotlib.org/).

### Compilation:

**1. On Linux platforms:**

  ``you@place:/path/to/repo$`` ``mkdir build/ && cd build/``<br>
  ``you@place:/path/to/repo/build$`` ``cmake ..``<br>
  ``you@place:/path/to/repo/build$`` ``make``<br>

  On success, ``you@place:/path/to/repo/build$`` ``ls libgcikpi.so`` returns ``0`` (``echo $?`` prints the last return code).

---
### Links to [Colab notebooks](https://drive.google.com/drive/folders/1jCwQQR_jWTeCUMxnlZLj4kN04MoWjbLu?usp=sharing):
* [test-suit-1.ipynb](https://colab.research.google.com/drive/1K_mDBX7iBS-5j_jSzsocxcpylUQmbtrL?usp=sharing)
