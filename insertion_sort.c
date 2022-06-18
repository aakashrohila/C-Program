#include<stdio.h>
#define SIZE 10
int print_array(int arr[]);
int main()
{

    int arr[10] = {12, 33 , 5 , 6 , 78, 55 , 62 , 99, 34, 52};
    int i,key,j;
    printf("Array before Sorting \n");
    print_array(arr);
    for(i = 1;i<SIZE ; i++)
    {
        j = i-1;
        key = arr[i];


        while(key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;

    }

    printf("Array after sorting \n");
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