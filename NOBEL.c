#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N=0,M=0,flag = 0,i=0;
	    int *topic, *occupied;
	    scanf("%d %d",&N,&M);
	    
	    topic = (int*)calloc(N,sizeof(int));
	    occupied = (int*)calloc((M+1),sizeof(int));

	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&topic[i]);
	        occupied[topic[i]] = 1;
	  
	    }  
	   
	    
	    for(i=1;i<(M+1);i++)
	    {
	       if(occupied[i]!=1)
	       {
	            printf("Yes\n");
	            flag = 1;
	            break;
	       }
	    }
	    
	    if(flag==0)
	        printf("No\n");
	   
	}
	return 0;
}

