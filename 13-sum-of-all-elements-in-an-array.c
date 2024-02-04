#include <stdio.h>

int main() {
    int nums[]={1,2,3,4,5};
    int sum=0;
    int length=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<length;i++) {
        sum=sum+nums[i];
    }
    printf("Sum of%d\n",sum);
    return 0;
}