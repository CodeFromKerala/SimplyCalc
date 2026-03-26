#include "parsefunc.h"
#include "simplycalc.h"
#include <array.h>
#include <funcs.h>
#include <stdio.h>

int main() {
  double params[] = {1, 4, 3};
  func binomial = createPolynomial(params, 3); // f(x) = 3x^2 + 4x + 1
  func drvt_binomial = drvt(binomial, 1);      // f'(x) = 6x + 4
  printf("%f \n", parse(binomial, 5));         // 96
  printf("%f \n", parse(drvt_binomial, 5));    // 34
  return 0;
}
