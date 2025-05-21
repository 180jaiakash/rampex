#include <stdio.h>
int digits(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        sum=sum+i;
        }
    }
    return sum;
}
int main() {
    // Write C code here
   printf("%d",digits(8));

    return 0;
}