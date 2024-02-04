#include <stdio.h>

int main() {
    char w[]="civic";
    int flag=0,length;
    length=sizeof(w)/sizeof(w[0])-1;
    //-1 is done for null terminatior /0.
    for(int i=0,j=length-1;i<j;i++,j--) {
        if(w[i]==w[j]) {
            flag=1;
        }
        else {
            flag=0;
        }
    }
    if(flag==1) {
        printf("Palindrome");
    }
    else {
        printf("Not a palindrome");
    }
    return 0;
}