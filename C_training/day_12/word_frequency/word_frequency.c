#include<stdio.h>
#include<string.h>


int get_frequency(char* str1 , char* str2){
	int count = 0;
	//printf("%lu",strlen(str1)-strlen(str2));
	for(int i = 0;i<strlen(str1);i++){
		int flag = 1;
		for( int j = 0;j<strlen(str2)-1;j++ ){
			if( str1[i+j] != str2[j] ) {
				flag = 0;
				break;
			}
		}
		//printf("%d == %d\n",i,flag);
		if(flag) count++;
	}

	return count;
}

void main(){

	char str1[50],str2[50];

	printf("Enter the string 1:\n");
	fgets(str1,50,stdin);

	printf("Enter the string 2:\n");
	fgets(str2,50,stdin);


	printf("\nThe total occurrence is %d\n", get_frequency(str1,str2) );

}
