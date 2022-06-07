#include <stdio.h>

int main(void) {
	int test_cases;
	int U,V,A,S,speed;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d %d %d %d",&U,&V,&A,&S);
	    if(U==V)
	        printf("Yes\n");
	    
	   else if((U*U - 2*A*S) <= V*V)
	        printf("Yes\n");
	   else
	            printf("No\n");
	    
	}
	
	return 0;
}

