#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)\
	{
	    int N,P,X,Y,i=0,tim=0;
	    int A;
	    scanf("%d %d %d %d",&N,&P,&X,&Y);
	    for(i=1;i<=N;i++)
	    {
	        scanf("%d",&A);
	        if(A==0 && i<=P)
	            tim = tim + X;
	        else if(A==1 && i<=P)
	            tim = tim+ Y;
	    }
	    printf("%d\n",tim);
	    
	}
	return 0;
}

