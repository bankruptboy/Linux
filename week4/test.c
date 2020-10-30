#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void findljj(FILE *fp,int i)
{
	char str[60];
	char buffer[20];
	char buf[100];
	int length[100];
	int b = 0;//某数前面数据的长度
	//读出数据的个数 
	memset(buf,0,sizeof(buf));
	memset(buffer,0,sizeof(buffer));
	memset(length,0,sizeof(length));
	fseek(fp , 0 ,SEEK_SET);
    fread(buffer, 4, 1, fp);
    
  	int n; //数据个数 
    sscanf(buffer,"%d",&n);    
    
    //读出数据的长度 
	fseek(fp , 4 ,SEEK_SET);
    fread(buf, 4*n, 1, fp);
    int j , w=0;
    for(j = 0;j<4*n;j+=4)
    {
    	if(buf[j] !=' ' && buf[j+1] == ' ')
    	{
    		length[w++] =(int)(buf[j] - '0');

		}
    	if(buf[j] !=' ' && buf[j+1] != ' ' && buf[j+2] == ' ')
    	{
    		length[w++] =(int)((buf[j] - '0')*10 +buf[j+1]- '0');
		}
		if(buf[j] !=' ' && buf[j+1] != ' ' && buf[j+2] != ' ' && buf[j+3] == ' ')
    	{
    		length[w++] =(int)((buf[j] - '0')*100 +(buf[j+1] - '0')*10+ (buf[j+2] - '0'));
		}
		if(buf[j] !=' ' && buf[j+1] != ' ' && buf[j+2] != ' ' && buf[j+3] != ' ')
    	{
    		length[w++] =(int)((buf[j] - '0')*1000 +(buf[j+1] - '0')*100+(buf[j+2] - '0')*10+(buf[j+3] - '0'));
		}
		
	}
    int l;
	for(l = 0;l<i-1;l++)
	{
		b=length[l]+b;		
	}
    //读出第i个数据的内容
	 
    fseek(fp , (n+1)*4+b ,SEEK_SET);
	if(fgets (str, length[i-1]+1, fp)!=NULL ) {
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
   int i; //第几个数据  
   scanf("%d",&i); 
   //写入数据 
   fputs("10  ", fp); 
    
   fputs("10  ", fp); 
   fputs("2   ", fp);
   fputs("2   ", fp);
   fputs("5   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("1   ", fp);
   fputs("C Programming Langauge abcdefghijk", fp);
      
   findljj(fp,i);
   fclose(fp);
   
   return 0;
}
