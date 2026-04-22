#include <stdio.h>
int main() {
    float a,b;
    char op;

    printf("Enter operator: ");
    scanf(" %c",&op);

    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    switch(op){
        case '+': printf("Result = %.2f",a+b); break;
        case '-': printf("Result = %.2f",a-b); break;
        case '*': printf("Result = %.2f",a*b); break;
        case '/': printf("Result = %.2f",a/b); break;
        default: printf("Invalid operator");
    }
    return 0;
}

output
enter 2 numbers:4
2
enter an arithmetic operator:+
result=6
  
enter 2 numbers:4
2
enter an arithmetic operator:-
result=2
  
enter 2 numbers:4
2
enter an arithmetic operator:*
result=8
  
enter 2 numbers:4
2
enter an arithmetic operator:/
result=2
