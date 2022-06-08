#include <stdio.h>

int main(void) {
	int test_cases;
	int w1,w2,x1,x2,M;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    scanf("%d %d %d %d %d", &w1,&w2, &x1 , &x2 , &M);
	    if((w2-w1)>=M*x1 && (w2-w1)<=M*x2)
	        printf("%d\n",1);
	    else
	        printf("%d\n",0);
	    
	}
	return 0;
}

