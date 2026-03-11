#include "simplycalc.h"

double derivative(func f, int order, double val){
    if (order == 0){
        return f(val);
    }else{
	return f(val);
    }
}

double algebra_conv(func f, double upper_limit, double lower_limit, double sum_lim){
    double sum;
    for (int i = 0; i < sum_lim; i++){
        sum += derivative(f, i, lower_limit);
    }
    return sum;
}

double algebra_conv_std(func f, double upper_limit, double lower_limit){
	return algebra_conv(f, upper_limit, lower_limit, 100);
}
