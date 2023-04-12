#include<stdio.h>
#include<unistd.h>

int main()
{
	long int page_size = sysconf(_SC_PAGESIZE);//sysconf() is a system configuration function

	printf("My page size: %ld\n",page_size);

	void *c1= sbrk(0);

	printf("Program break address: %p\n",c1);

	printf("Size of char : %lu \n",sizeof(char));

	/*void **/c1 = /*sbrk(100);*/ ((char*)c1 +1);

	printf("c1: %p\n",c1);

	brk(c1);

	void *c2= sbrk(0);

	printf("Program break address: %p\n",c2);

	return 0;
}
