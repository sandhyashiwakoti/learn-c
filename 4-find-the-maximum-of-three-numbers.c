#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    printf("The maximum number is ");
    if(num1>num2 && num1>num3) {
        printf("%d",num1);
    }
    else if(num2>num1 && num2>num3) {
        printf("%d",num2);
    }
    else {
        printf("%d",num3);
    }
    return 0;
}
