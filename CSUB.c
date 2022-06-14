#include <stdio.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    size_t length,i,count =0;
	    scanf("%d%*c",&length);
	    
	    char str[length+1];
	    scanf("%s",str);
	    
	    for(i=0;i<length;i++)
	    {
	        if(str[i]=='1')
	            count++;
	    }
	    
	    printf("%lld\n",count*(count+1)/2);
	    
	}
	return 0;
}

