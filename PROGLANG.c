#include <stdio.h>

int main(void) {
	int test_cases;
	int A,B,A1,B1,A2,B2;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	 scanf("%d %d %d %d %d %d",&A,&B,&A1,&B1,&A2,&B2);
	 
	 if((A==A1 || A == B1)&&(B == A1 || B==B1))
	    printf("1\n");
	 
	 else if(((A==A2 || A == B2)&&(B == A2 || B==B2)))
	    printf("2\n");
	    
	 else
	    printf("0\n");
	}
	return 0;
}

