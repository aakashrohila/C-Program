#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    size_t no_of_seasons=0, no_of_episodes=1;
	    size_t *music_length;
	    size_t sum_episode_length = 0, episode_length;
	    size_t i,j;
	    scanf("%d", &no_of_seasons);
	    
	    music_length = (size_t*)malloc(no_of_seasons * sizeof(size_t));
	    
	    for(i=0;i<=no_of_seasons;i++)
	    {
	        for(j=0;j<((i==0)?no_of_seasons:(no_of_episodes+1));j++)
	        {
	            if(i==0)
	                scanf("%lld",&music_length[j]);
	                
	            if(i!=0 && j==0)
	                scanf("%d",&no_of_episodes);
	                
	            if(i!=0 && j!=0)
	            {
	                scanf("%lld",&episode_length);
	                sum_episode_length = sum_episode_length + episode_length;
	            }
	            

	        }
	        if(i!=0 && no_of_episodes >= 1 )
	        sum_episode_length = sum_episode_length - (no_of_episodes - 1)*music_length[i-1];
	        
	        
	    }
	    printf("%lld\n",sum_episode_length);
	    
	}
	
	return 0;
}

