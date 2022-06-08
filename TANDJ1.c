#include <stdio.h>
#include<math.h>
int main(void) {
	int test_cases;
	
	scanf("%d",&test_cases);
	int a,b,c,d,K;
	
	while(test_cases--)
	{
	  
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&K);
	    
	    if((c-a)<0)
            a = (c-a)*(-1);
	    else
            a = (c-a);	   
	        
	    if((d-b)<0)
            b = (d-b)*(-1);
	    else
            b = (d-b);
        
        
//Case1: If our distance is exactly equal to K moves
        if((a+b)==K)
            printf("Yes\n");
            
//Case2: If our distance is greater than the no. of moves we have
        else if((a+b)>K)
	        printf("No\n");
	        
/*Case3:If we have surplus K moves with oppose to distance, so we need to waste moves by going
        to and fro after reaching jerry which is only possible if we have even no. of moves else with odd
        moves left we cannot return back to original position */
	    
	    else if(K > (a+b) && (K - (a+b))%2==0)
	        printf("Yes\n");

//Case 4: Not possible to move to jerry cell
	    else
	        printf("No\n");
	    
	}
	return 0;
}

