#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 8
int main(void)
{
	FILE *fd;
	int fgets_yes;
	struct iobuf {
	char buf[BUF_SIZE];
	char others[BUF_SIZE];
	}buffer;
	memset(&buffer,'\0',sizeof(struct iobuf)); 
	fprintf(stdout,"please enter a line\n");
	gets(buffer.buf);
	fprintf(stdout,"gets() get string \"%s\"\n",buffer.buf);
	/* 查看溢出情况 */
	fprintf(stdout,"buffer.others is \"%s\"\n",buffer.others);
	exit(0);
}
