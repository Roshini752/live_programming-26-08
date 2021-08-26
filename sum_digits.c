#include<stdio.h>
int recursion(int n)
{
    int sum=0,rem;
    if(n==0)
    return 0;
    rem=n%10;
    sum=rem+recursion(n/10);
    return sum;

}
int main()
{
    int n;
    printf("enter the n value\n");
    scanf("%d",&n);
    int sum = recursion(n);
   /* while(n!=0)
    {
        int rem = n%10;
        sum = sum + rem;
        n=n/10;
    }*/
    printf("%d",sum);
}   
