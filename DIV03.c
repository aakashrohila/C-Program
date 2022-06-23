#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int i = 10, K = 0;
	    int arr[10];
	    while(i--)
	        scanf("%d",&arr[i]);
	        
	   scanf("%d",&K);
	   
        for(i = 0;i<10;i++)
        {
            if(K<=arr[i])
            {
                arr[i] = arr[i] - K;
                K = 0;
                break;
            }    
            else
            {
                K = K - arr[i];
                arr[i] = 0;
            }
            //printf("%d ",arr[i]);    
        }
        //printf("\n");
        
        for(i = 0;i<10;i++)
        {
            if(arr[i]>0)
            {
                printf("%d\n",10-i);
                break;
            }
        }
        
	}
	
	return 0;
}

