#include <stdio.h>

int main() {
    int principal,rate,time,simpleInterest;
    printf("Enter principal: ");
    scanf("%d",&principal);
    printf("Enter rate of interest: ");
    scanf("%d",&rate);
    printf("Enter time: ");
    scanf("%d",&time);
    simpleInterest=(principal*rate*time)/100;
    printf("The simple interest is: %d",simpleInterest);
    return 0;
}