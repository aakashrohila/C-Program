#include <stdio.h>

int main(void) {
    int test_cases;
    scanf("%d",&test_cases);
    
    while(test_cases--)
    {
        int N,K,flag = 0,m=0,myMan;
        scanf("%d %d",&N,&K);
        
        int players[N],i,temp[N];
        
        for(i=1;i<=N;i++)
        {
            scanf("%d",&players[i]);
            
            myMan = players[i];
            while(players[i]<=K)
            {
               if(players[i]==K)
                {
                    temp[m]= myMan;
                    flag = 1;
                    m++;
                    break;
                }
                players[i]= players[i] + myMan;
            }
        }
        myMan = 0;
        for(i=0;i<m;i++)
        {
            if(temp[i]> myMan)
            {
                myMan = temp[i];
            }
        }
        
        if(flag ==1)
            printf("%d\n",myMan);
        else
            printf("%d\n",-1);
    }
	return 0;
}

