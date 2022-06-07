/* Hacker Rank Problem : Digit Frequency
https://www.hackerrank.com/challenges/frequency-of-digits-1

*/
#include <stdio.h>

int main() {

    char num[1001];
    int frequency[10] = {0};
    int count=0;
    int i=0,j;
    scanf("%s",num); 
    
    //printf("%c",num[1]);
    while(num[i]!='\0')
    {
        //printf("inside");
        if(num[i]>=48 && num[i]<=57 && frequency[num[i]-'0']==0)
        {
            //printf("inside");
            j=i;
            count = 0;
            while(num[j]!='\0')
            {
                //printf("inside");
                if(num[i]==num[j])
                {
                    //printf("inside");
                    count++;
                }
                j++;   
            }
            frequency[num[i]-'0'] = count;
            //printf("%d" , count);
        }
        i++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",frequency[i]);
    }
    
    return 0;
}
