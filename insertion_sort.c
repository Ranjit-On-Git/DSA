#include<stdio.h>
void insert_sort(int [],int);
int main()
{
    int i;
    int A[]={45,88,99,22,90,55};
    insert_sort(A,6);
    /*for(i=0;i<6;i++)
    {
        printf("%d\t ",A[i]);
    }
    return 0;*/
}
void insert_sort(int A[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0&&temp<A[j];j--)
         A[j+1]=A[j];
         A[j+1]=temp;
        
    }
    for(i=0;i<6;i++)
    {
        printf("%d\t ",A[i]);
    }
    
}