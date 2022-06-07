#include <stdio.h>

int main(void) {
	int test_cases;
	int N,X;
	int size_of_movie,ratings,max_rating;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d %d", &N,&X);
	    
	    size_of_movie = 0;
	    ratings = 0;
	    max_rating = 0;
	    while(N--)
	    {
	        scanf("%d %d",&size_of_movie,&ratings);
	        
	        if(size_of_movie <= X && ratings > max_rating)
	            max_rating = ratings;
	    }
	    printf("%d\n",max_rating);
	}
	return 0;
}

