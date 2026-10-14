#include <stdio.h>
int main (){
    
    int num1,num2;
    float add,sub,mul,div;
    printf("enter 1st number: \n");
    scanf("%d", &num1);
    printf("enter 2nd number: \n");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("====result====\n");
    printf("addition:%.2f",add);
    printf("subtraction:%.2f",sub);
    printf("multiplication:%.2f",mul);
    printf("division:%.2f",div);
    

    return 0;
}
