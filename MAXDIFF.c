#include <stdio.h>
void insertion_sort(int arr[], int N);
int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,K,i,j; 
	    size_t sum_son_1 = 0 , sum_chef_1 = 0, sum_son_2 = 0 , sum_chef_2=0;
	    scanf("%d %d",&N,&K);
	    
	    int arr[N];
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    insertion_sort(arr,N);
	    
	    for(i=0,j=N-1;i<N && j>=0;i++,j--)
	    {
	        if(i<K)
	        {
	            sum_son_1 += arr[i];
	            sum_son_2 += arr[j];
	        }
	        else
	        {
	            sum_chef_1 +=arr[i];
	            sum_chef_2 += arr[j];
	        }   
	        
	    }
	    if(abs(sum_chef_1 - sum_son_1) > abs(sum_chef_2 - sum_son_2))
	        printf("%lld\n",abs(sum_chef_1 - sum_son_1));
	    
	    else
	        printf("%lld\n",abs(sum_chef_2 - sum_son_2));
	    
	}
	return 0;
}

void insertion_sort(int arr[], int N)
{
    int i;
    for(i=1 ; i<N ; i++)
    {
        int j = i-1;
        int key = arr[i];
        
        while(j>=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


