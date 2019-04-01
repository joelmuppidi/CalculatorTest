
#include"calc.h"
double summation(double x,double y){
    return(x+y);
}

double subtraction(double x,double y){
    return(x-y);
}

double multiplication(double x,double y){
    return(x*y);
}

double division(double x,double y){
    if (y)
        return(x/y);
    else
        return (0);
}
