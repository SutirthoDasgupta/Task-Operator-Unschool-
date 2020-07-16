#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,k,l,n,z,y,m;
    float x;
    printf("Please enter the first number");
    scanf("%d",&a);
    printf("Please enter the second number");
    scanf("%d",&b);

    k=a+b;
    l=a-b;
    m=a/b;
    n=a*b;
    z=a%b;
    x=((float)a/b)*100;



    printf("Sum of %d and %d is %d\n",a,b,k);
    printf("Difference of %d and %d is %d\n",a,b,l);
    printf("Division of %d and %d is %d\n",a,b,m);
    printf("Product of %d and %d is %d\n",a,b,n);
    printf("Remainder when first number is divide by second number =%d\n",z);
    printf("Percentage of %d in %d is %f%%\n",a,b,x);
    return 0;
}
