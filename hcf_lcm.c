


#include<stdio.h>
int main(){
    int a,b,t,z,x;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    z=b;
    printf("hcf of %d and %d is:",a,b);
    x=b;
    z=a;

    for(;a%b;){
            t=b;
    b=a%b;
    a=t;

    }

    printf("%d\n",b);
    printf("lcm is %d",(z*x)/b);

    return 0;
}