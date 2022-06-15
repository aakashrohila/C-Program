#include <stdio.h>

int main(void) {
	int test_cases,i;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int flag = 0;
	    char X[11],Y[11];
	    scanf("%s",X);
	    scanf("%s",Y);
	    
	    for(i=0; X[i]!='\0';i++)
	    {
	        if(X[i]=='?' && Y[i]!='?')
	            continue;
	            
	        else if(Y[i]=='?' && X[i]!='?')
	            continue;
	            
	        else if(X[i]=='?' && Y[i]=='?')
	            continue;
	            
	        else if(X[i]!=Y[i])
	        {
	            flag = 1;
	            printf("No\n");
	            break;
	        }
	        
	    }
	    
	    if(flag==0)
	        printf("Yes\n");
	    
	}
	return 0;
}

