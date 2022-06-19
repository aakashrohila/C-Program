#include <stdio.h>
#define swap(a,b) {int t = a ; a = b ; b = t;}

int quick_sort(int arr[], int l , int h);
int partition(int arr[],int l ,int j);

int main(void) {
	int test_cases;
	
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int arr[N], sum = 0, i;
	    
	    for(i = 0 ; i<N ; i++)
	        scanf("%d",&arr[i]);
	    
	    quick_sort(arr,0,N);
	    
	    sum = arr[0] + arr[1];
	    
	    printf("%d\n",sum);
	}
	return 0;
}

int quick_sort(int arr[], int l , int h)
{
    int j;
    if(l < h)
    {
        j = partition(arr,l,h);
    
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
    
}

int partition(int arr[],int l ,int h)
{
    
    int pivot = arr[l];
    int i = l;
    int j = h;
    
    while(i<j)
    {
    do{
        i++;
    }while(arr[i]<=pivot);
    
    do{
        j--;
    }while(arr[j]>pivot);
    
    if(i<j)
        swap(arr[i],arr[j]);
    }
    
    swap(arr[l], arr[j]);
    
    return j;
}