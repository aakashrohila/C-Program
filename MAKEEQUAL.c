#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,i;
	    int *arr,max_ele = 0,min_ele=100000;
	    scanf("%d",&N);
	    
	    arr = (int*)malloc(N*sizeof(int));
	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);

	        if(arr[i]>max_ele)
	            max_ele = arr[i];
	        
	        if(arr[i]<min_ele)
	            min_ele = arr[i];
	            
	        //printf("%d\n",arr[i]);
	    }
	    
	    printf("%d\n",max_ele-min_ele);
	    
	    
	    free(arr);
	}
	return 0;
}

