//W.A.P to convert the decimal to binary using bitwise operator
#include<stdio.h>
int main()
{
	int a[31],rem,n,i=0,j;
	printf("enter the n value\n");
	scanf("%d",&n);
	while(n!=0)
	{
	rem = n & 1;
	a[i] = rem;// a[0],a[1]...
	i++;
	n = n>>1;
	}
	for(j=i-1;j>=0;j--)
	{
	printf("%d",a[j]);
	}
	printf("\n");
}