#include <stdio.h>

int main(void) {
	int test_cases;
	int N,A_fruit,B_veggies,C_fish,dish1,dish2;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d %d %d %d",&N,&A_fruit,&B_veggies,&C_fish);
	    
	    dish1 = (A_fruit < B_veggies)?A_fruit:B_veggies;
	    
	    B_veggies = B_veggies - dish1;
	    
	    dish2 = (B_veggies < C_fish)? B_veggies : C_fish;
	    
	    if((dish2 + dish1) >= N)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

