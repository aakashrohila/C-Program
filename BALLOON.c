#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N;
	    int arr,i,count = 0;
	    scanf("%d",&N);
	    
	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr);
	        switch(arr)
	        {
	            case 1:
	            case 2:
	            case 3:
	            case 4:
	            case 5:
	            case 6:
	            case 7:
	            {
	                count++;
	                break;
	            }
	            default:
	                continue;
	        }
	        if(count == 7)
	            printf("%d\n",i+1);
	    }
	    
	}
	return 0;
}

