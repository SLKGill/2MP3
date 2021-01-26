#include <stdio.h>
int main(int argc, char** argv) {
    // make a simple calculator using switch and if statements which perform arithmetic operation
    char operator;
    float numberOne, numberTwo;
    
    printf("Enter an arithmetic operator + - * /\n");
    scanf("%c", &operator);
    
    printf("Enter the numbers you would like to perform the operator on, \nseparate them with a space\n");
    
    scanf("%f %f", &numberOne, &numberTwo);
    
    switch(operator) {
        case '+':
            printf("Result=%f\n", numberOne + numberTwo );
            break;
        case '-':
            printf("Result=%f\n", numberOne - numberTwo );
            break;
        case '*':
            printf("Result=%f\n", numberOne * numberTwo );
            break;
        case '/':
            printf("Result=%f\n", numberOne / numberTwo );
            break;
            
        default:
            printf("Invalid operation");
    }
    return 0;
}
