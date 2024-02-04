#include <stdio.h>

int main() {
    int terms,firstTerm=0,secondTerm=1,nextTerm;
    printf("Enter terms: ");
    scanf("/n%d",&terms);
    printf("The fibonacci series upto %d terms: ",terms);

    for(int i=0;i<terms;i++) {
        printf("%d",firstTerm);
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
    return 0;
}