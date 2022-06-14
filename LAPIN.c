#include <stdio.h>
#include <string.h>
// For frequuency check we are adding strings to check if they have the same sum of ascii value
// and if they do then it means it is lapin

// I looked at user 'ketakrs' solution to solve this problem, since my ascii approach was wrong 
// and failed for string adebc.


int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int temp = 0, i=0 ,j=0,flag = 0;
	    char lapi[1001];
	    int lapi_1[124] = {0};
	    int lapi_2[124] = {0};
	    
	    scanf("%s",lapi);
	    
// strlen(lapi)%2 adds condition for even or odd 
        temp = strlen(lapi)/2;
        for(i=0,j=(temp+strlen(lapi)%2);(i< temp) && (j<strlen(lapi)) ;i++,j++)
        {
            lapi_1[lapi[i]]++;
            lapi_2[lapi[j]]++;
        }

        for(i=0;i<124;i++)
        {
            if(lapi_1[i]!=lapi_2[i])
            {
                flag = 1;
                break;
            }
        }
            
	    if(flag==1)
	        printf("NO\n");
	    else
	        printf("YES\n");
	    
	}
	return 0;
}

