#include <stdio.h>

int main(void) {
	int test_cases;
	int N,K;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    scanf("%d %d", &N,&K);

        if(N>=K && K!=0)
        {
            printf("%d\n",N%K);   
        }
        else
	        printf("%d\n",N);
	    
	}
	return 0;
}

