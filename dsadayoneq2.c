#include<stdio.h>
int main()
{
    int a[20][20];

    int counte=0;
    int counto=0;
    printf("Enter 4*4 matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
       if(a[i][j]%2==0)
       counte++;
       else {if(a[i][j]%2!=0)
       counto++;}


    }
}
printf("even=%d odd=%d",counte,counto);
}