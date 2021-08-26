//W.A.P to count total 1's and 0's in a decimal number
#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the num value\n");
	scanf("%d",&num);  // 16--> 10000
	int count1=0,count0=0;
	for(i=0;i<32;i++)
	{
	if((num>>i)&1)  
	{
	count1++;
	}
	else
	{
	count0++;
	}
	}
	printf("ones=%d\n",count1);
	printf("zeros=%d\n",count0);
}