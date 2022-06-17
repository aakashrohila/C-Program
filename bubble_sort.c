#include<stdio.h>
#define SIZE 10
#define swap(a,b) {int t = a; a= b; b = t;}
int print_array(int* arr);

int main(){

    int arr[10] = {12, 33 , 5 , 6 , 78, 55 , 62 , 99, 34, 52};

    int pos,i;

    printf("Before Sort\n");
    print_array(arr);
    for(i = 0;i<SIZE ; i++)
    {
        for(pos = 0; pos+1 < SIZE - i ; pos ++)
        {
            if(arr[pos] > arr[pos+1])
                swap(arr[pos],arr[pos+1]);
        }
    }
    printf("After Sort\n");
    print_array(arr);

    return 0;
}

int print_array(int* arr)
{
    int i;
    for(i=0;i<SIZE; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}