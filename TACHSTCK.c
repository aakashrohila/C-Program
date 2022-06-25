#include <stdio.h>
#include<stdlib.h>
#define swap(a,b) {int t = a; a = b; b = t;}


void quick_sort(int *arr, int l , int h);
int partition(int *arr,int l , int h);

int intCompare(const void *p1, const void *p2){
    return *(int *)p1 - *(int *)p2;
}

int main(void) {
	int N,D,i,count = 0;
	scanf("%d %d",&N,&D);
	int arr[N];
	for(i=0;i<N;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	//quick_sort(arr,0,N);
	qsort(arr, N, sizeof(int), intCompare);
	
	for(i=0;i<N-1;i++)
	{
	    if(abs(arr[i] - arr[i+1]) <=D)
	    {
	        count++;
	        i++;
	    }
	    
	}
	
	printf("%d",count);
	
	
	
	return 0;
}

void quick_sort(int *arr, int l , int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
}

int partition(int *arr,int l , int h)
{
    swap(arr[l],arr[(l+h)/2])
    int pivot = arr[l];
    int i = l;
    int j = h;
    do{
        do{
            i++;
        }while(arr[i]<=pivot);
        
        do{
            j--;
        }while(arr[j] > pivot);
        
        if(i<j)
            swap(arr[i],arr[j]);
        
    }while(i<j);
    
    swap(arr[l],arr[j])
    
    return j;
}


