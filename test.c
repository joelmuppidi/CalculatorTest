#include"calc.h"
int test(){
    //Test cases using Assert

    assert(summation(3,4)==7);
    assert(summation(-3,-9)==-12);
    assert(summation(3,-3)==0);

    assert(subtraction(3,2)==1);
    assert(subtraction(-1,-3)==2);
    assert(subtraction(-2,3)==-5);

    assert(multiplication(3,7)==21);
    assert(multiplication(-8,-3)==24);
    assert(multiplication(-3,0)==0);

    assert(division(3,0)==0);
    assert(division(-3,-3)==1);
    assert(division(-3,3)==-1);
    assert(division(0,3)==0);
    assert(division(3,3)==1);


    printf("Test Cases Passed");
    return 0;
}
