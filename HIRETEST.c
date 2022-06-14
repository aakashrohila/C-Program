#include <stdio.h>

int main(void) {
	int test_case;
	scanf("%d",&test_case);
	
	while(test_case--)
	{
	    int N,M,X,Y,i,j;
	    
	    
	    scanf("%d %d",&N,&M);
	    char grades[M+1];
	    scanf("%d %d",&X, &Y);
	    
	    for(i=0;i<N;i++)
	    {
	        int count_1 =0 ,count_2 = 0;
	        scanf("%s",grades);
	        
	        for(j=0;j<M;j++)
	        {
	            if(grades[j]=='F')
	                count_1++;
	            else if(grades[j]=='P')
	                count_2++;
	        }
	        if(count_1 >= X || (count_1 == (X-1) && count_2 >= Y))
	            printf("%d",1);
	        else
	            printf("%d",0);
	    }
	    printf("\n");
	    
	}
	return 0;
}

