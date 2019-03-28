// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

double summation(double x,double y);
double subtraction(double x,double y);
double multiplication(double x,double y);
double division(double x,double y);
void test();
int main() {

    int op;
    double firstNumber,secondNumber;
    double mode;
    here:
    printf("Enter an mode (0 - calculator , 1 - Test functions): ");
    scanf("%lf", &mode);
    if(mode==0){

    printf("\nEnter an operator\n 1 => + \n 2 => - \n 3 => * \n 4 => /\n: ");
    scanf("%d", &op);

    up:

    printf("\nEnter first operand: ");
    scanf("%lf",&firstNumber);



    printf("\nEnter second operand: ");
    scanf("%lf",&secondNumber);





    switch(op)
    {
        case 1:
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, summation(firstNumber,secondNumber));
            break;

        case 2:
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, subtraction(firstNumber,secondNumber));
            break;

        case 3:
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, multiplication(firstNumber,secondNumber));
            break;

        case 4:

                printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, division(firstNumber,secondNumber));

            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

    return 0;
    }
    else if(mode==1)
        test();
    else{
        printf("enter valid mode!!!\n");
        goto here;

    }
}

void test(){
    //Test cases using Assert

    assert(summation(3,4)==7);
    assert(summation(-3,-9)==-12);
    assert(summation(3,-3)==0);

    assert(subtraction(3,2)==1);
    assert(subtraction(-1,-3)==-2);
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
