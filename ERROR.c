#include <stdio.h>
#include <limits.h>

int main(void) {
	int feedback;
	scanf("%d",&feedback);
	
	while(feedback--)
	{
	    char binary_string[INT_MAX];
	    int flag = 0,i;
	    
	    scanf("%s",binary_string);
	    
	    for(i=0;binary_string[i]!='\0';i++)
	    {
	        if(binary_string[i] == '0' && binary_string[i+1] == '1' && binary_string[i+2] == '0')
	        {
	            printf("Good\n");
	            flag = 1;
	            break;
	        }
	        else if(binary_string[i] == '1' && binary_string[i+1] == '0' && binary_string[i+2] == '1')
	        {
	            printf("Good\n");
	            flag = 1;
	            break;
	        }
	    }
	    if(flag ==0)
	        printf("Bad\n");
	    
	}
	return 0;
}

