#include<stdio.h>
int main()
{
    int i;
int a[10],n,large=0,seclarge=0,third_lar=0;
printf("enter no of students:\n");
scanf("%d",&n);
printf("enter their scores:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
large=a[0];
seclarge=a[0];
third_lar=a[0];
for(i=1;i<n;i++)
{
    if(large<a[i])
    large=a[i];
}
    for(i=1;i<n;i++)
{
     if(seclarge<a[i]&&a[i]!=large)
     seclarge=a[i];
}
   for(i=1;i<n;i++)
{
     if(third_lar<a[i]&&a[i]!=large&&a[i]!=seclarge)
     third_lar=a[i];
}
printf("Rank 1 is=%d\nRank 2 is:=%d\nRank 3 is:=%d",large,seclarge,third_lar);
}
