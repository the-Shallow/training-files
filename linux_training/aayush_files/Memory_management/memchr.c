#include<stdio.h>
#include<string.h>

int main()
{
	const char str[]="Linuxkernel.com";
	const char ch = '.';
	char *ret;

	//printf("String before set/initialization is %s \n",str);

	ret = memchr(str,ch,strlen(str));

	printf("String after **%c** is - **%s** \n",ch,ret+1);

	return 0;
}
