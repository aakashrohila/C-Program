#include <stdio.h>

int main(void) {
	int test_cases,result;
	int L,R;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	 scanf("%d %d",&L,&R);
	 
	 if(R==L)
	    printf("%d\n",1);
	 else
	 {
    	 result = (R-L+1) + (R-L); 
    	 printf("%d\n",result);
	 }
	}
	return 0;
}

