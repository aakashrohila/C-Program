#include<stdio.h>
#define SIZE 10
#define swap(a,b) {int t = a ; a = b ; b = t;}
int print_array(int *arr);

int main()
{   
    int arr[10] = {12, 33 , 5 , 6 , 78, 55 , 62 , 99, 34, 52};
    int select_pos , pos;
    int i;
    printf("Before sort \n");
    print_array(arr);

    for(select_pos = 0 ; select_pos <= SIZE-1 ;select_pos++)
    {
        for(pos = select_pos + 1 ; pos <= SIZE -1; pos++)
        {
            if(arr[select_pos] < arr[pos])
                swap(arr[select_pos], arr[pos]);
        }
    }
    printf("After sort \n");
    print_array(arr);


    return 0;
}

int print_array(int *arr)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%d ", arr[i]);
    printf("\n");
}