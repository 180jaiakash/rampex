#include <stdio.h>
int factorial(int n)
{
    int fact =1;
    for (int i=0; i<=5;i++)
    {
        fact =fact* i;
    }
    return fact;
}
    int main()
    {
        printf("%d",factorial(5));
        
        return 0;
}