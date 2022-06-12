#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int M = 0,X=0,Y=0,sum = 0;
	    int cop_house = 0,i=0,j=0,temp=0;
	    int houses[101] = {0};
	    
	    scanf("%d %d %d",&M,&X,&Y);
	    while(M--)
	    {
	        scanf("%d",&cop_house);
	        
	       temp = X*Y + 1;
	       for(i = (cop_house) ;;i--)
	       {
	           houses[i] = 1;
	           temp--;
	           if(i==1 || temp==0)
	            break;
	       
	       }
	       //printf("%d-%d ",i,(cop_house));
	       
	       temp = X*Y + 1;
	       for(j = (cop_house) ; ;j++)
	       {
	  
	           houses[j] = 1;
	           temp--;
	           if(j==100 || temp==0)
	            break;
	       }
	       //printf("%d-%d\n",(cop_house),j);
	    }
	    
	    for(i=1;i<=100;i++)
	        sum += houses[i];
	    
	    printf("%d\n",100-sum);
	}
	return 0;
}

