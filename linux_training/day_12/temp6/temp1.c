#include<stdio.h>
#include<stdlib.h>

int main(){


	int ret;

	ret = execl("/home/khush/training-files/linux_training/day_12/temp6/temp5","./temp5","5","10",0);
	printf("\n%d\n",ret);

}
