#include <stdio.h>

int main() {
    int num,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The factorial of %d is ",num);
    for(int =num;i>=1;i--) {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}