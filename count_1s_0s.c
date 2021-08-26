//W.A.P to count total 1's and 0's in a decimal number
#include<stdio.h>
int count(int num,int count0,int count1)
{
    int i;
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
int main()
{
	int i,num;
    int count0=0,count1=0;
	printf("enter the num value\n");
	scanf("%d",&num);  // 16--> 10000
	count(num,count0,count1);
	
}
