#include<stdio.h>
#define SIZE 10
// Only works on sorted list in ascending order
int main()
{
    int arr[10] = {5, 6 , 12 , 34 , 52, 55 , 62 , 78, 99, 120};
    int left = 0, right= SIZE - 1;
    int middle;
    int Key, comparison = 0;

    printf("Enter the Key\n");
    scanf("%d",&Key);

    while(left <= right)
    {
        comparison++;

        middle = (left + right)/2;

        if(arr[middle] == Key)
        {
            printf("Key %d found after %d comparison\n",Key,comparison);
            break;
        }

        else if(arr[middle] < Key)
        {
            left = middle +1;
        }

        else
        {
            right = middle - 1;
        }
        

    }
    

    return 0;
}