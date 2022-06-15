#include <stdio.h>

int main(void) {
	int report;
	scanf("%d",&report);
	
	while(report--)
	{
	    //printf("----------------\n");
	    int length,i,flag = 0,mark = 0;
	    scanf("%d",&length);
	    
	    char str[length+1];
	    scanf("%s",str);
	    
	    for(i=0;str[i]!='\0';i++)
	    {
	        if(flag == 0 && str[i] == 'H')
	        {
	            flag = 1;
	        }
	        
	        else if(flag == 0 && str[i] == 'T')
	        {
	            printf("Invalid\n");
	            mark = 1;
	            break;
	        }
	        
	        else if(flag == 1 && str[i] == 'T' )
	        {
	            flag = 0;
	        }

	        else if(flag ==1 && (str[i]!='.' || str[i]=='H'))
	        {
	            printf("Invalid\n");
	            mark = 1;
	            flag = 0;
	            break;
	        }
	    }
	    if(flag == 1)
	        printf("Invalid\n");
	    else if(mark == 0)
	        printf("Valid\n");
	    
	    
	}
	return 0;
}

