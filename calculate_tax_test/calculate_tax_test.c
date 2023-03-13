#include<stdio.h>

// Calculate tax

float get_taxable_amount(float gross_salary,float total_saving){
	return total_saving > 100000.00 ? gross_salary - 100000.00 : gross_salary - total_saving;
}

float get_tax( float taxable_amount ){
	float res = 0.0;	
	if( taxable_amount > 100000.00 && taxable_amount <= 200000.00 ){
		res =  ( 0.1*(taxable_amount - 100000.00) );	
	}else if(taxable_amount > 200000.00 && taxable_amount <= 500000.00){
		res = (0.1*100000.00) + ( 0.2*(taxable_amount - 200000.00) );
	}else if(taxable_amount > 500000.00){
		res = (0.1*100000.00)  + ( 0.2* 300000.00)  + ( 0.3*( taxable_amount - 500000.00 ) );
	}

	return res;
}

void main(){
	float gross_salary,total_saving;

	printf("Enter the gross salary:");
	scanf("%f",&gross_salary);

	printf("\nEnter the total saving:");
	scanf("%f",&total_saving);

	float taxable_amount = get_taxable_amount(gross_salary,total_saving);
	printf("The taxable amount is %f",taxable_amount);
	printf("\nThe tax is %f\n",get_tax(taxable_amount));
	
}
