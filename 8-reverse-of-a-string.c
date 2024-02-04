#include <stdio.h>

int main() {
    char g[]="Hello!";
    int length=sizeof(g)/sizeof(g[0]);
    for(int i=length-1;i>=0;i--) {
        printf("%c ",g[i]);
    }  
    return 0;
}