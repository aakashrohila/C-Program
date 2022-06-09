#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,arr[100],i,distance=0,gas=0;
	    
	    scanf("%d",&N);
	    
	   for(i=0;i<N;i++)
	   {
	        scanf("%d",&arr[i]);
	   }
	    
	    for(i=0;i<N;i++)
	    {
	        
	        if((gas==0 && arr[i] ==0)||(i==0 && arr[i] == 0))
	            break;
	        
	       distance++;
	       gas = gas + arr[i] - 1;

	    }
	    printf("%d\n",distance + gas);
	    
	}
	return 0;
}

