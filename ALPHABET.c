#include <stdio.h>

int main(void) {
	char latin_word[26];
	char book_word[12];
	
	int no_of_line,i,j;
	gets(latin_word);
	scanf("%d",&no_of_line);
	
    while(no_of_line--)
    {
        scanf("%s",book_word);
        int word[strlen(book_word)], sum = 0;
        
        for(i=0;book_word[i]!='\0';i++)
        {
            word[i]= 0;
            for(j=0;latin_word[j]!='\0';j++)
            {
                if(book_word[i]==latin_word[j])
                {
                    word[i] = 1;
                    break;
                }    
            }
            sum = sum + word[i];
        }
        
        if(sum==strlen(book_word))
            printf("Yes\n");
            
        else
            printf("No\n");
    
    }
    
	
	
	return 0;
}

