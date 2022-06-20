#include <stdio.h>
#define swap(a,b) {int t=a; a=b; b=t;}

int partition(int arr[], int l, int h);
void quick_sort(int arr[], int l, int h);


int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,i,diff;
	    scanf("%d",&N);
	    
	    int arr[N];
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    quick_sort(arr, 0 , N);
	    diff = arr[N-1];
	    for(i = 0;i<N-1;i++)
	    {
	        if((arr[i+1] - arr[i]) < diff)
	            diff = arr[i+1] - arr[i];
	    }
	    
	    printf("%d\n", diff);
	    
	}
	return 0;
}

void quick_sort(int arr[], int l, int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
}

int partition(int arr[], int l, int h)
{
    int i = l;
    int j = h;
    int pivot = arr[l];
    
    do{
        do
        {
            i++;    
        }while(arr[i]<=pivot);
        
        do
        {
            j--;
        }while(arr[j]>pivot);
        
        if(i<j)
            swap(arr[i],arr[j]);
        
    }while(i<j);
    
    swap(arr[l],arr[j]);
    
    return j;
    
}

