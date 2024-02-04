#include <stdio.h>

int main() {
    char fw[]="SILENT";                                         
    char sw[]="LISTEN";
    int l1=sizeof(fw)/sizeof(fw[0])-1;
    int l2=sizeof(sw)/sizeof(sw[0])-1;
    int flag=0;
    for(int i=0;i<l1;i++) {
        for(int j=0;j<l2;j++) {
            if(fw[i]==sw[j]) {
                flag=1;
                break;
            }
            else {
                flag=0;
            }
        }
    }
    if(flag==1) {
        printf("Anagram");
    }
    else {
        printf("Not an anagram");
    }
    return 0;
}