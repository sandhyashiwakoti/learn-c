#include <stdio.h>

int main() {
    int nums[2][3]={{1,2,3},{4,5,6}};
    int l1=sizeof(nums)/sizeof(nums[0]);
    int l2=sizeof(nums[0])/sizeof(nums[0][0]);
    int sum=0;
    for(int i=0;i<l1;i++) {
        for(int j=0;j<l2;j++) {
            int num=nums[i][j];
            sum=sum+num;
        }
    }
    printf("Sum of all elements: %d",sum);
    return 0;
}