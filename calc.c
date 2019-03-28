// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

double summation(double x,double y);
double subtraction(double x,double y);
double multiplication(double x,double y);
double division(double x,double y);

int main() {

    char ope;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    //scanf("%c", &ope);
    ope='*';

    printf("Enter first operand: ");
    //scanf("%lf",&firstNumber);
    firstNumber=10;

    printf("Enter second operand: ");
   //scanf("%lf",&secondNumber);
   secondNumber=4;

    switch(ope)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, summation(firstNumber,secondNumber));
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, subtraction(firstNumber,secondNumber));
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, multiplication(firstNumber,secondNumber));
            break;

        case '/':
            if(secondNumber)
                printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, division(firstNumber,secondNumber));
            else
                printf("undefined");
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }


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
    return(x/y);
}
