#ifndef SIMPLYCALC_H
#define SIMPLYCALC_H

typedef double (*func)(double);
double algebra_conv_std(func f, double upper_limit, double lower_limit);
double algebra_conv(func f, double upper_limit, double lower_limit, double sum_lim);
double derivative(func f, int order, double value);

#endif
