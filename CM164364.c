#include <stdio.h>
#include<stdlib.h>
#define swap(a,b) {int t=a; a=b; b = t;}

void quick_sort(int *arr, int l ,int h);
int partition(int *arr, int l, int h);

int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,X,i,temp = 0,count=1,m = 0;
        int dist_flav = 0;
	    scanf("%d %d",&N,&X);
	    temp = N-X;
	    
	    int arr[N+1];
        int *flavor_count_arr = (int*)calloc(N+1,sizeof(int));
	    
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    quick_sort(arr,0,N);
	    
	   for(i=0;i<N;i++)
	   {
	        
	       if(arr[i]==arr[i+1])
	           count++;
	            
	       else
	       {
	           flavor_count_arr[m] = count;
	           m++;
              count = 1;
	       }   
	   }
	    
	    for(i=0;i<N;i++)
	    {
	        if(flavor_count_arr[i]!=0 && temp>0)
            {
                temp--;
                dist_flav++;
            }
	    }

        printf("%d\n",dist_flav);
	 
	    
	    
	}
	return 0;
}


void quick_sort(int *arr, int l ,int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
}

int partition(int *arr, int l, int h)
{
    int mid = (l+h)/2;
    swap(arr[l],arr[mid])
    int pivot = arr[l];
    int i = l;
    int j = h;
    do
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        
        do{
            j--;
        }while(arr[j]>pivot);
        
        if(i<j)
            swap(arr[i],arr[j])
        
    }while(i<j);
    
    swap(arr[l],arr[j])
    
    return j;
}
