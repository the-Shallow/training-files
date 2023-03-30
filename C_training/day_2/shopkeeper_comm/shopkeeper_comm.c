#include<stdio.h>

// Calculate the shopkeeper commission

float get_cpu_commission(int cpu_amount){
	float res = 0.0;

	if( cpu_amount >= 10000 && cpu_amount < 25000 ){
		res = 0.08*cpu_amount;
	}else if(cpu_amount >= 25000){
			res = 2000 + 0.1*(cpu_amount - 25000);
	}

	return res;	
}

float get_mon_commission(int mon_amount){

	return mon_amount >= 10000 ? (0.05*10000 + 0.08*(mon_amount - 10000) )  : 0.05*mon_amount;
}

void main(){
	int cpu_amount,mon_amount;

	printf("Enter the amount of CPU:");
	scanf("%d",&cpu_amount);

	printf("\nEnter the amount of Monitor:");
	scanf("%d",&mon_amount);

	float cpu_comm = get_cpu_commission(cpu_amount);
	float mon_comm = get_mon_commission(mon_amount);

	printf("\nThe Total Commission is %f\n",cpu_comm + mon_comm);	
}
