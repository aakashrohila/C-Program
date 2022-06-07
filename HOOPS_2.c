#include <stdio.h>

int main(void) {
	int test_cases,hoops;
	int i=0,count;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    count = 0;
	    scanf("%d",&hoops);
	    for(i=1;i<=hoops;i++)
	    {
	        if(i%2==1)
	            count++;
	    }
	    printf("%d\n",count);
	 }
	
	
	return 0;
}
