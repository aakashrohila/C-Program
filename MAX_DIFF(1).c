#include <stdio.h>

int main(void) {
    int test_cases=0,i=0,j=0,k=0,m=0;
    int N[1000]={0};
    int S[1000]={0};
    //int cases[1000][1000];
    int max_abs_diff=0;
    int abs_diff=0;
	scanf("%d",&test_cases);
	
	for(i =0;i<test_cases;i++)
	{
	    scanf("%d %d", &N[i],&S[i]);
	    
	    max_abs_diff = 0;
        /*
        cases[0][0] = 0;
        cases[0][1] = 1;
        
        cases[1][0] = 0;
        cases[1][1] = N[k]-1;
        
        cases[2][0] = 0;
        cases[2][1] = N[k]-2;
        
        
        cases[3][0] = 1;
        cases[3][1] = 1;
        
        cases[4][0] = 1;
        cases[4][1] = N[k]-1;
        
        cases[5][0] = 1;
        cases[5][1] = N[k]-2;*/
        
        
        for(k=0;k<=N[i];k++)
        {
            for(m=0;m<=N[i];m++)
            {
                //printf("%d %d \n",cases[m][j], cases[m][j+1]);
                //printf("%d",S[i]);
                if((k + N[i]-m) == S[i])
                {
                    
                    //printf("* %d %d *\n",cases[m][j], cases[m][j+1]);
                    abs_diff = k - (N[i]-m);
                    if(abs_diff<0)
                        abs_diff = abs_diff*(-1);
                        
                    //printf("%d",abs_diff);
                        
                    if(abs_diff > max_abs_diff)
                    {
                        max_abs_diff = abs_diff;
                    }
                }
            }
            
        }
        
        printf("%d",max_abs_diff);
        printf("\n");
        
	    
	}
	
	return 0;
}