// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int sum=0;
    int arr[]={2,5,7,8,9};
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
printf("%d",sum/5);
    return 0;
}