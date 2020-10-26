#include<stdio.h>
int main()
{
	unsigned short i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			unsigned short a=i-1; 
			printf("%u\n",a);
		}
		else
		{
			printf("%u\n",i);
		}
		
	}
}
