#include <stdio.h>

int main(void) {
    int num_testcases,i=0,year_to_succeed[50];
    int A[201],B[201],X[51];
	scanf("%d",&num_testcases);
	for(i=0;i<num_testcases;i++)
	{
	    scanf("%d %d %d",&A[i],&B[i],&X[i]);
	    
	}
	
	for(i=0;i<num_testcases;i++)
	{
	    year_to_succeed[i] = (B[i]-A[i])/X[i];
	    printf("%d",year_to_succeed[i]);
	    printf("\n");
	}
	return 0;
}

