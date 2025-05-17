#include<stdio.h>

int main()
{
    int arr[]={1,3,6,8,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}