#include <stdio.h>
#include <math.h>

float result(float op1, float op2, char operator){
    switch (operator)
    {
    case '+':
        return op1 + op2;

    case '-':
        return op1 - op2;
    
    case '*':
        return op1 * op2;

    case '/':
        if(op2 != 0)
            return op1 + op2;
        else
            printf("Zero Division Error\n");
        return 0;

    case '^':
        return pow(op1,op2);

    default:
        printf("Invalid operator\n");
        return 0;
    }
}

int main(){
    float op1;
    float op2;
    char operator;
    printf("Enter the operation to perform(+, -, *, /, ^): \n");
    scanf("%c", &operator);
    printf("Enter the operands:\n");
    scanf("%f %f",&op1, &op2);


    printf("Result of %.2f %c %.2f = %.3f", op1, operator, op2, result(op1, op2, operator));
}