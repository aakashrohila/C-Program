#include <stdio.h>

int main(void) {
	int test_cases;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,i;
	    int A,temp,no_maxSpeed_car = 0;
	    scanf("%d",&N);
	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&A);

	        
	        if(A<=temp  || i==0)
	        {
	          no_maxSpeed_car++;  
	        }
	        
	        else
	        {
	            while(A > temp)
	                A--;
	        }
	        
	        temp = A;
	    }
	    printf("%d\n",no_maxSpeed_car);
	    
	}
	return 0;
}

