#include <stdio.h>
#define swap(a,b) {int t=a; a = b; b = t;}


int quick_sort(int *arr,int l,int h);
int partition(int *arr,int l,int h);

int main() {
	int test_cases;
	scanf("%d",&test_cases);
	
	while(test_cases--)
	{
	    int N,i;
	    scanf("%d",&N);
	    
	    int arr[N], replic_arr[N];
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    quick_sort(arr,0,N);
	    int m = -1;
	    
	    for(i=0;i<N-1;)
	    {
	        if(arr[i]==arr[i+1])
	        {
	            m++;
	            replic_arr[m] = arr[i];
	            i = i+2;
	        }
	        else
	            i++;
	    }
	    
	   // for(i=0;i<=m;i++)
	   // {
	   //     printf("\n%d ",replic_arr[i]);
	   // }
	   // printf("\n");
	   

	    if(m >= 1)
	    {

	        printf("%d\n",replic_arr[m-1]*replic_arr[m]);
	    }
	    else
	        printf("%d\n",-1);
	}
	return 0;
}


int quick_sort(int *arr,int l,int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
}

int partition(int *arr,int l,int h)
{
    swap(arr[l],arr[(l+h)/2]);
    int i = l;
    int j = h;
    int pivot = arr[l];
    
    do{
        do{
            i++;
        }while(arr[i]<=pivot);
        
        do{
            j--;
        }while(arr[j]>pivot);
        
        if(i<j)
            swap(arr[i],arr[j]);
    }while(i<j);
    
    swap(arr[l],arr[j]);
    
    return j;
}
