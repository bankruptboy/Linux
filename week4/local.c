#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void fun(char *str)
{
	char *str_c=str;
	int i,j=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			str_c[j++]=str[i];
	}
	str_c[j]='\0';
	str=str_c;	
}

void findljj(FILE *fp,int i)
{
	char str[60];
	char buffer[20];
	char buf[100];
	int b = 0;//ĳ��ǰ�����ݵĳ���
	//�������ݵĸ��� 
	fseek(fp , 0 ,SEEK_SET);
    fread(buffer, 1, 1, fp);
    
  	int n; //���ݸ��� 
    sscanf(buffer,"%d",&n);    
    
    //�������ݵĳ��� 
	fseek(fp , 4 ,SEEK_SET);
    fread(buf, sizeof(buf), 1, fp);
    fun(buf);
    int l;
	for(l = 0;l<i-1;l++)
	{
		b=buf[l]+b-'0';		
	}

    //������i�����ݵ����� 
    fseek(fp , (n+1)*4+b ,SEEK_SET);
	if(fgets (str, (int)(buf[i-1]-'0')+1, fp)!=NULL ) {
    	puts(str);
   }
   else{
   	  printf("error");
   }
}
int main ()
{
   FILE *fp;
   fp = fopen("file.txt","w+");
   int i; //�ڼ�������  
   scanf("%d",&i); 
   //д������ 
   fputs("6   ", fp);  
   fputs("4   ", fp); 
   fputs("2   ", fp);
   fputs("2   ", fp);
   fputs("5   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("C Programming Langauge", fp);
      
   findljj(fp,i);
   fclose(fp);
   
   return 0;
}
