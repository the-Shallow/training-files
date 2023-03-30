#include<stdio.h>
#include<string.h>


// Movie Collection

typedef struct movie {
	char title[50];
	char director[50];
	float rating;	 
	int year_released;
} Movie;


void scan_movies(Movie movies[] , int size){

	for(int i = 0;i<size;i++){
		Movie temp;

		printf("Enter the title of the movie:\n");
		fgets(temp.title,50,stdin);

		printf("Enter the director of the movie:\n");
		fgets(temp.director,50,stdin);

		printf("Enter the rating of the movie:\n");
		scanf("%f",&temp.rating);

		printf("Enter the year the movie was released:\n");
		scanf("%d%*c",&temp.year_released);

		movies[i] = temp;
	}
}

void print_movies(Movie movies[] , int size){

	for(int i = 0;i<size;i++){
		Movie temp = movies[i];
		printf("\n----------------------------------------\n");

		printf("The title of the movie is %s\n",temp.title);
		printf("The director of the movie is %s\n",temp.director);
		printf("The rating of the movie is %f\n",temp.rating);
		printf("The release of the movie is %d\n",temp.year_released);

		printf("\n----------------------------------------\n");
	}

}

void main(){

	int size;

	printf("Enter the number of movies you want to make:");
	scanf("%d%*c",&size);
	
	Movie movies[size];

	scan_movies(movies,size);
	print_movies(movies,size);
}
