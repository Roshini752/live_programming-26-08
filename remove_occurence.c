//W.A.P to find the no. of times the character is found in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="character";
	char ch;
	int freq,l1,i,j=0;
	printf("enter the character\n");
	scanf("%c",&ch);
	l1=strlen(str);
	char a[20];
	for(i=0;i<l1;i++)
	{
		if(str[i]!=ch)
		{
			
			a[j++]=str[i];
            freq++;
		}
        
	}
    a[j++]='\0';
    printf("%s\n",a);
}  

