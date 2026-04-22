#include<stdio.h>
void quick(int A[],int,int);
int main()
{
    int A[6]={5,56,7,9,3,21};
    quick(A,0,5);
    printf("sorting array is:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",A[i]);
    }


}
void quick(int A[],int l,int r)
{
    int i,j,t,pivot;
    if(l<r)
    {
        pivot=l;
        i=l;
        j=r;
        while(i<j)
        {
            while(A[i]<=A[pivot]&&i<r)
            i++;
            while(A[j]>A[pivot])
            j--;
        
        if(i<j)
          {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
          }
        }
        t=A[pivot];
        A[pivot]=A[j];
        A[j]=t;
        quick(A,l,j-1);
        quick(A,j+1,r);

    }
}