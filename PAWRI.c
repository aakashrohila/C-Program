#include <stdio.h>
#include<limits.h>

int main(void) {
    int test_case,i;
    scanf("%d%*c",&test_case);
    
    while(test_case--)
    {
        char text[INT_MAX];
        gets(text);

        for(i=0;text[i]!='\0';i++)
        {
            if(text[i]=='p' && text[i+1]=='a' && text[i+2]=='r' && text[i+3]=='t' && text[i+4]=='y')
            {
                text[i+2] = 'w';
                text[i+3] = 'r';
                text[i+4] = 'i';
            }
            
        }
        printf("%s\n",text);
    }
	// your code goes here
	return 0;
}

