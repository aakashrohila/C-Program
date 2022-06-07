#include <stdio.h>

int main(void) {
	int test_cases,hoops;
	int i,j;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d",&hoops);
	    for(i=0,j=hoops+1;;)
	    {
	        if(i<j && (i+1)!=j)
	            i++;
	        else
	        {
	            printf("%d\n",j);
	            break;
	        }
	        
	        if(j>i && (j-1)!=i)
	            j--;
	        else
	        {
	            printf("%d\n",i);
	            break;
	        }
	        
	   }
	}
	return 0;
}

