#include <stdio.h>
int main(){
    char o;
    int a, b, result;
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &o);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);
    
    switch(o){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    
}
