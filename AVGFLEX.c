//In a nutshell, will only boast if there are less toppers 
#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,A[100],student_scoring_less, student_scoring_more , count = 0 ;
	    int i,j;
	    scanf("%d",&N);
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    
	    for(i=0;i<N;i++)
	    {
	        student_scoring_less = 0;
	        student_scoring_more = 0;
	        for(j=0;j<N;j++)
	        {
	            if(A[j]<=A[i])
	            {
	                student_scoring_less++;
	            }    
	            else
	            {
	                student_scoring_more++;
	            }
	        }
	       // printf("*%d ",student_scoring_less);
	       // printf("%d * ",student_scoring_more);
	        if(student_scoring_less > student_scoring_more)
	            count++;
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}

