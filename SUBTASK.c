#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,M,K,points = 0,flag_1=0,flag_2 = 0;
	    int *arr,i;
	    
	    scanf("%d %d %d",&N,&M,&K);
	    
	    arr = (int*)malloc(N*sizeof(int));
	    
	    for(i=0;i<N;i++)
	   {
	       scanf("%d",&arr[i]);
	       if(arr[i]==1)
	       {
	           flag_1++;
	       }
	       if(i<=(M-1) && arr[i]==1)
	       {
	           flag_2++;
	       }
	       
	   }
	   
	    if(flag_2 == M)
	        points = K;
	    
	    if(flag_1 == N)
	        points = 100;
	    
	    printf("%d\n",points);
	    
	    
	    free(arr);
	}
	return 0;
}

