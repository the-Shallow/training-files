#include<stdio.h>

// Calculate the number of illiterate men and women

void main(){
	float total_population = 80000.0;
	float total_men = 0.52 * total_population;
	float total_women = total_population - total_men;
	float total_literacy = 0.48 * total_population;
	float total_literate_men = 0.35 * total_population;
	float total_literate_women = total_literacy - total_literate_men;

	float total_illiterate_men = total_men - total_literate_men;
	float total_illiterate_women = total_women - total_literate_women;

	printf("\n-----------------------------\n");
	printf("The Number of illiterate men are:%f\n",total_illiterate_men);
	printf("The Number of illiterate women are:%f\n",total_illiterate_women);
	printf("\n-----------------------------\n");
	
}
