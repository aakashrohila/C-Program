#include <stdio.h>

int main(void) {
	int test_cases;
	float A,B,S;
	float C;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    scanf("%f %f %f %f",&S,&A,&B,&C);
	    
	    if((S + S*C/100)>=A  && (S+S*C/100)<=B)
	        printf("Yes\n");
	    else
	        printf("No\n");
	}
	return 0;
}

