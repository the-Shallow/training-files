#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// Convert the integer to words

char* concatString(char* dest , char* src){
    char destination[1000];
    char source[1000];
    strncpy(destination,"",strlen(destination));
    strncpy(source,"",strlen(source));
    
    int k = 0;
    for(int i = 0;i<strlen(dest);i++){
        destination[k++] = dest[i];
    }
    
    if(strlen(destination) > 0){
        strcat(destination," ");
        k++;
    }
    
    for(int i = 0;i<strlen(src);i++){
        destination[k++] = src[i];
    }
    
    destination[k] = '\0';
    char* temp = (char*)malloc(sizeof(destination));
    for(int i = 0;i<strlen(destination);i++){
        temp[i] = destination[i];
    }
    
    return temp;
}


char* numberToWords(long int n){

	long int limit = 1000000000000,hundred,curr_mult = 0 ;

	if(n == 0) return "Zero";

	char* multiplier[5] = { "" , "Trillion", "Billion", "Million", "Thousand" };

	 char* twenty[20] = {
        "",        "One",       "Two",      "Three",
        "Four",    "Five",      "Six",      "Seven",
        "Eight",   "Nine",      "Ten",      "Eleven",
        "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
  
    	// Array to store multiples of ten
    	char* tens[9]
        = { "",      "Twenty",  "Thirty", "Forty", "Fifty",
            "Sixty", "Seventy", "Eighty", "Ninety" };

	if(n < 20) {
	   return twenty[n];
	}

	char* res = "";
	for(long int i = n;i>0;i%=limit,limit /= 1000){
        
		hundred = i / limit;
        
		while(hundred == 0){
			i %= limit;
			limit /= 1000;
			hundred = i / limit;
			curr_mult++;
			//printf("%ld\t",hundred);
			//printf("%ld\n",limit);
		}

		if(hundred > 99){
		    char* dest = twenty[hundred/100];
		    char* src = "Hundred";
		    char* temp = concatString(dest,src);
			res = concatString(res,temp);
		}

		hundred = hundred % 100;
        
		if( hundred > 0 && hundred  < 20 ){
			res = concatString(res , concatString(twenty[hundred] , " " ) );
		}else if(hundred % 10 == 0 && hundred != 0){
			res = concatString(res , concatString(tens[hundred/10-1] , " ")  );
		}else if( hundred > 20 && hundred < 100 ) {
			res = concatString( res ,concatString(  concatString( tens[hundred/10-1], " " ), concatString( twenty[hundred%10], " " ) ) );
		}

		if(curr_mult < 4){
			res = concatString( res , concatString( multiplier[++curr_mult] , " "  ) );
		}
	}
	
	return res;
}

void main(){

	long int n;

	printf("\nEnter the value of number:\n");
	scanf("%ld",&n);
	
	char* res = numberToWords(n);

	printf("%s\n",res);

}
