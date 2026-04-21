#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    a=-1;
    b=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 5;
}