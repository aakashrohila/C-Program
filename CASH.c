//Wasted about 2-3 hours on this problem, finally looked at the solution video and guess what
// it was never about removal or addition of coin or choosing c value...it was just a sum of everything
//(face palm moment)

#include <stdio.h>

int main(void) {
	int test_cases;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    long int N,K,i;
	    long long int A,sum=0;
	    scanf("%ld %ld", &N,&K);
	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%lld",&A);
	        
	        sum = sum + A;
	    }
	    printf("%ld\n",sum%K);
	}
	
		return 0;
}
	

	
	
	
	


