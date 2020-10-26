#include<stdio.h>
int main()
{
	short i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			short a=i-1; 
			printf("%d\n",a);
		}
		else
		{
			printf("%d\n",i);
		}
		
	}
	printf("%d\n",i);
}
