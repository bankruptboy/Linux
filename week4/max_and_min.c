#include <stdio.h>
void int_num()
{
	int i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			int a=i-1; 
			printf("%d\n",a);
		}
		else
		{
			printf("%d\n",i);
		}
		
	}
	printf("%d\n",i);
}
void short_num()
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
void long_num()
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
void char_num()
{
	char i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			char a=i-1; 
			printf("%d\n",a);
		}
		else
		{
			printf("%d\n",i);
		}
		
	}
	printf("%d\n",i);
}
void unsigned_char_num()
{
	unsigned char i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			unsigned char a=i-1; 
			printf("%d\n",a);
		}
		else
		{
			printf("%d\n",i);
		}
		
	}
	printf("%d\n",i);
}
void unsigned_int_num()
{
	unsigned int i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			unsigned int a=i-1; 
			printf("%u\n",a);
		}
		else
		{
			printf("%u\n",i);
		}
		
	}
}
void unsigned_short_num()
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
void unsigned_long_num()
{
	unsigned long i =1;
	while(i>0)
	{
		i=i<<1;
		if(i<0)
		{
			unsigned long a=i-1; 
			printf("%u\n",a);
		}
		else
		{
			printf("%u\n",i);
		}
		
	}
}
void float_num()
{
	float float_n = -8.25;
    char *tmp = (char *)&float_n;
    //0 111 1111 1111 1111 1111 1111 1111 1111
    *tmp = 0xff; //1111 1111  β�� 
    *(tmp + 1) = 0xff;  //1111 1111 
    *(tmp + 2) = 0x7f;  //0111 1111  �������һλΪ0  
    *(tmp + 3) = 0x7f;  //0111 1111 С��  ���� ����    
	printf("���float�� f = %f\n", float_n);
	printf("���float�� f = %e\n", float_n);
		
	float float_n1 = -8.25;
    char *tmp2 = (char *)&float_n1;
 	//1 111 1111 1111 1111 1111 1111 1111 1111
    *tmp2 = 0xff; //1111 1111  β�� 
    *(tmp2 + 1) = 0xff;  //1111 1111 
    *(tmp2 + 2) = 0x7f;  //0111 1111  �������һλΪ0  
    *(tmp2 + 3) = 0xff;  //0111 1111 С��  ���� ���� 
	printf("��Сfloat�� f = -%f\n", float_n);
	printf("��Сfloat�� f = -%e\n", float_n);
} 

void double_num()
{
	//0 111 1111 1110 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 
    double double_n = -6.25; 
    char *tmp1 = (char *)&double_n;
    *tmp1 = 0xff;
    *(tmp1 + 1) = 0xff;
    *(tmp1 + 2) = 0xff;
    *(tmp1 + 3) = 0xff;
    *(tmp1 + 4) = 0xff;
    *(tmp1 + 5) = 0xff;
    *(tmp1 + 6) = 0xef;
    *(tmp1 + 7) = 0x7f; //С�� 
    printf("���double f = %lf\n",double_n);
 	printf("���double f = %e\n",double_n);
 	
 	//1 111 1111 1110 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 
    double double_n1 = -3.25; 
    char *tmp3 = (char *)&double_n1;
    *tmp3 = 0xff;
    *(tmp3 + 1) = 0xff;
    *(tmp3 + 2) = 0xff;
    *(tmp3 + 3) = 0xff;
    *(tmp3 + 4) = 0xff;
    *(tmp3 + 5) = 0xff;
    *(tmp3 + 6) = 0xef;
    *(tmp3 + 7) = 0xff; //С�� 
    printf("��Сdouble f = %lf\n",double_n1);
    printf("��Сdouble f = %e\n",double_n1);
}
void cicle()
{
	int ch = 1;
	while(ch)
	{
		printf("-------------------------------------\n"); 
		printf("1.float���������Сֵ��\n");
		printf("2.double���������Сֵ��\n");
		printf("3.int���������Сֵ��\n");
		printf("4.char���������Сֵ��\n");
		printf("5.short���������Сֵ��\n");
		printf("6.long���������Сֵ��\n");
		printf("7.unsigned_char���������Сֵ��\n");
		printf("8.unsigned_int���������Сֵ��\n");
		printf("9.unsigned_short���������Сֵ��\n");
		printf("10.unsigned_long���������Сֵ��\n");
		printf("0.�˳���\n");
		printf("-------------------------------------\n"); 
		printf("����������Ҫ��ӡ���������ͣ� ");
		scanf("%d",&ch); 
		switch(ch)
		{
			case 1:
				float_num();
				break;
			case 2:
				double_num();
				break;
			case 3:
				int_num();
				break;
			case 4:
				char_num();
				break;
			case 5:
				short_num();
				break;
			case 6:
				long_num();
				break;
			case 7:
				unsigned_char_num();
				break;
			case 8:
				unsigned_int_num();
				break;
			case 9:
				unsigned_short_num();
				break;
			case 10:
				unsigned_long_num();
				break;
			default: 
				break;
		}

	}
}
int main() {
	cicle();
    return 0;
}
