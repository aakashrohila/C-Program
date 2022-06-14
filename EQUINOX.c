#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,A,B;
	    size_t Sarthak = 0, Anuradha = 0;
	    
	    scanf("%d %d %d",&N,&A,&B);
	    
	    char str_2[101];

	    while(N--)
	    {
	        scanf("%s",str_2);
	        
        
            if('E'==str_2[0] || 'Q'==str_2[0] || 'U'==str_2[0] || 'I'==str_2[0] 
            || 'N'==str_2[0] || 'O'==str_2[0] || 'X'==str_2[0] )
                Sarthak = Sarthak + A;
            else
                Anuradha = Anuradha + B;
	            
	        
	        
	    }
	    if(Sarthak > Anuradha)
	        printf("SARTHAK\n");
	    else if(Sarthak < Anuradha)
	        printf("ANURADHA\n");
	    else if(Sarthak == Anuradha)
	        printf("DRAW\n");
	    
	}
	return 0;
}

