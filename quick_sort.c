#include<stdio.h>
#define SIZE 10
#define swap(a,b) {int t = a ; a = b ; b = t;}
int print_array(int arr[]);
int quicksort(int arr[], int , int);
int partition(int arr[],int l,int h);


int main()
{

    int arr[10] = {12, 33 , 5 , 6 , 78, 55 , 62 , 99, 34, 52};
    print_array(arr);

    quicksort(arr,0,9);

    print_array(arr);


    return 0;

}

int print_array(int arr[])
{
    int i;
    for(i=0 ; i < SIZE ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int quicksort(int arr[], int l , int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);
    }

}

int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h+1;
    
    while(i<j)
    {
    do
    {
        i++;
    } while (arr[i]<= pivot);
    
    do
    {
        j--;
    } while (arr[j] > pivot);

    if(i<j)
        swap(arr[i], arr[j]);    
    }

    swap(arr[l],arr[j]);
    //printf("runnign");
    return j;

}