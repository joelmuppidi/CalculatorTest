// Performs addition, subtraction, multiplication or division depending the input from user


#include"calc.h"
int main() {

    int op;
    double firstNumber,secondNumber;
    double mode;
    printf("Enter an mode (0 - calculator , 1 - Test functions): ");
    scanf("%lf", &mode);
    if(mode==0){

    printf("\nEnter an operator\n + => 1 \n - => 2 \n * => 3 \n / => 4\n: ");
    scanf("%d", &op);


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


    }
}

