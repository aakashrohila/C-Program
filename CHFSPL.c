#include <stdio.h>

int main(void) {
	int test_cases;
	int A,B,C,hits;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    hits = 0;
	    scanf("%d %d %d",&A,&B,&C);
	    
	    hits = A + B;
	    if(hits < A + C)
	        hits = A + C;
	    if(hits < B + C)
	        hits = B + C;
	        
	    printf("%d\n",hits);
	}
	return 0;
}

