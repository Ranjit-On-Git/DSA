#include <stdio.h>
int main()
{
    printf("enter two digit numbers:");
    int num;
    scanf("%d", &num);
    int remain;
    int sum=0;
    //remain = num % 10;
    //int div = num / 10;
    
   // sum = remain + div;
   while(num!=0)
   {
    sum=sum+num%10;
    num=num/10;

   }
  
    
    printf("sum of two digit is_%d", sum);
    return 9;
}

