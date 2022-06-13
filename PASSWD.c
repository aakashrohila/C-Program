#include <stdio.h>
#include<string.h>

int main(void) {
    int test_cases;
    scanf("%d",&test_cases);
    
    while(test_cases--)
    {
        char password[21],i;
        int flag_1 =0 , flag_2 =0 , flag_3 =0 , flag_4 =0 , flag_5 =0 ;
        
        scanf("%s",password);
        
        if(strlen(password)>9)
            flag_5 = 1;
        else
        {
            printf("NO\n");
            continue;
        }
        for(i=0;password[i]!='\0';i++)
        {
            if(password[i] >=97 && password[i]<=122 )
                flag_1 =1;
                
            if(i>0 && i < (strlen(password)-1))
            {
                if(password[i]>=65 && password[i]<=90)
                    flag_2 = 1;
                    
                if(password[i]>= '0' && password[i]<='9')
                    flag_3 = 1;
                    
                if(password[i]== '@' || password[i]=='#'|| password[i]== '%'|| 
                    password[i]=='&' || password[i]== '?' )
                    flag_4 = 1;
            }
        }
        
        if((flag_1 + flag_2 + flag_3 + flag_4 + flag_5)==5)
            printf("YES\n");
        
        else
            printf("NO\n");
    }
	return 0;
}

