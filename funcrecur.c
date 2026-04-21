#include <stdio.h>
int fun(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}
int fun(int n)
{
    if(n==1)
    printf("%d\n",n);
    else
    {
    fun(n-1);
    
    printf("%d\n",n);
    
    fun(n-1);
    
   
    }
}