#include <stdio.h>

int main(void) {
    int test_cases;
    int first_dose,L,R;
    scanf("%d",&test_cases);
    
    while(test_cases--)
    {
        scanf("%d %d %d",&first_dose,&L,&R);
        
        if(first_dose>=L && first_dose<=R)
        {
          printf("Take second dose now\n");  
        }
        else if(first_dose > R)
        {
            printf("Too Late\n");
        }
        
        else
            printf("Too Early\n");
        
    }
	return 0;
}

