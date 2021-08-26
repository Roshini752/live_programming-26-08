#include<stdio.h>
int multiple_value(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    multiple_value(&a,&b);
    printf("a is %d\nb is %d\n",a,b);
}
