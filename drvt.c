#include "parsefunc.h"
#include "simplycalc.h"
#include <array.h>
#include <funcs.h>
#include <stdio.h>

int factorial(int n) {
  int f = 1;
  for (int i = 0; i < n; i++) {
    f = f * i;
  }
  return f;
}

func drvt(func f, int order) {
  func out = initPolynomial();
  if (f.type == POLYNOMIAL) {
    out.type = POLYNOMIAL;
    for (int i = 0; i < length(f.params) - 1; i++) {
      printf("i: %d, param: %f next_param: %f\n", i, get_param(f, i),
             get_param(f, i + 1));
      set_param(&out, i, get_param(f, i + 1) * (i + 1));
    }
  }
  return out;
}
