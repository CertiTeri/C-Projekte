#include <stdio.h>

int main(){
    int num1, num2;
    int mode;
    printf("%s", "Please input two numbers!\n");
    scanf("%d %d", &num1, &num2);
    printf("%s", "Please enter an Operand!\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n");
    scanf("%d", &mode);
    switch (mode)
    {
    case 1:
        printf("%d", num1 + num2);
        break;
    case 2:
        printf("%d", num1 - num2);
        break;
    case 3:
        printf("%d", num1 * num2);
        break;
    case 4:
        printf("%d", num1 / num2);
        break;
    
    default:
        printf("%s", "Please use a proper Operand!");
        break;
    }
    
    return 0;
}