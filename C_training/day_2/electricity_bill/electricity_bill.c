#include<stdio.h>

// Calculate Electricity Bill


float get_bill_domestic(int units){
	float bill;
	units = (float)units;
	if(units <= 50){
		bill = units*1.45;
	}

	if(units > 50 && units <= 100){
		bill = 50*1.45 + (units-50)*2.85;
	}

	if(units > 100 && units <=200){
		bill = 50*1.45 + 50*2.85 + (units - 100)*3.95; 
	}

	if(units > 200) bill = 50*1.45 + 50*2.85 + 100*3.95 +  (units - 200)*4.50;

	return bill;
}

float get_bill_commercial(int units){
	float bill;
	units = (float)units;
	if(units <= 100){
		bill = units*3.95;
	}

	if(units > 100)bill = 100*3.95 +  (units - 100)*7.00;

	return bill;
}

float get_extra_single(int units,char phase){
	float extra = units * 0.06;
	units = (float)units;
	if(phase == 'd'){
		printf("The extra is %f\n",extra < 20.0 ? 20.0 : extra);
		return extra < 20.0 ? 20.0 : extra;
	}
	
	printf("The extra is %f\n",extra < 50.0 ? 50.0 : extra);
	return extra < 50.0 ? 50.0 : extra;
}

float get_extra_three(int units,char phase) {
	float extra = units * 0.06;
	units = (float)units;
	if(phase == 'd'){
		printf("The extra is %f\n",extra < 50.0 ? 50.0 : extra);
		return extra < 50.0 ? 50.0 : extra;
	}

	printf("The extra is %f\n",extra < 100.0 ? 100.0 : extra);

	return extra < 100.0 ? 100.0 : extra;
}

void main(){
	char type;
	char phase;
	int units;

	printf("Enter the type and phase and units:");
	scanf("%c%c%d",&type,&phase,&units);


	float total_bill;

	if( type == 'd' ){
		total_bill = get_bill_domestic(units) + 10.0 + (phase == '1' ? get_extra_single(units,'d') : get_extra_three(units,'d'));
	}else if(type == 'c') {
		total_bill = get_bill_commercial(units) + 10.0 + (phase == '1' ? get_extra_single(units,'c') : get_extra_three(units,'c'));
	}else {
		printf("\nWrong Type\n");
	}

	printf("The Total Electricity bill is %f\n",total_bill);
}
