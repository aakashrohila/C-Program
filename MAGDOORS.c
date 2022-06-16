#include <stdio.h>
#include <limits.h>

int main(void) {
	int test_cases,i;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    char door[INT_MAX];
	    int wand = 0;
	    
	    scanf("%s",door);
	    
	    for(i=0;door[i]!='\0';i++)
	    {
	        if(door[i+1] !='\0' && ((door[i]-'0' + door[i+1] - '0')==1))
	        {
	            wand++;
	        }
	    }
	 if(door[0]=='0')
	    printf("%d\n",wand+1);  
	 else
	    printf("%d\n",wand);  
	}
	return 0;
}
