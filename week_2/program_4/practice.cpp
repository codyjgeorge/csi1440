#include "matrix.h"
#include <iostream>
using namespace std;

Matrix f(Matrix a);

int main() {
  Matrix a(15, 20), b;
  b = f(a);
  b.display(cout);
  return 0;
};

Matrix f(Matrix c) {
  c.display(cout);
  return c;
}
