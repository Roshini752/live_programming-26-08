#include<stdio.h>
int multiple_value(int *a, int *b, int *c)
{
    *a=9;
    *b=8;  
    *c=78;
}
int main()
{
    int a,b,c;
    multiple_value(&a,&b,&c);
    printf("a is %d\nb is %d\nc is %d\n",a,b,c);
}
