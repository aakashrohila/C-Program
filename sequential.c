#include<stdio.h>
#define SIZE 10

int main()
{
    int arr[10] = {12, 33 , 5 , 6 , 78, 55 , 62 , 99, 34, 52};
    int i,key,comparison = 0;

    printf("Enter the ley \n");
    scanf("%d",&key);


    for(i=0;i<=(SIZE - 1 ) ; i++ )
    {
        comparison++;
        if(arr[i]==key)
            printf("Number %d at %d location", key, comparison);


    }


    return 0;
}