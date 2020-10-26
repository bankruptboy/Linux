#include<stdio.h>
int main()
{
	long i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			long a=i-1; 
			printf("%ld\n",a);
		}
		else
		{
			printf("%ld\n",i);
		}
		
	}
	printf("%d\n",i);
}
