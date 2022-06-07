#include <stdio.h>

int main(void) {
	int test_cases;
	int N,K;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    scanf("%d %d", &N,&K);

        if(N>=K)
        {
            while(N>=K && N>=0)
            {
                N = N - K;
            }
            printf("%d\n",N);   
        }
        else
	        printf("%d\n",N);
	    
	}
	return 0;
}

