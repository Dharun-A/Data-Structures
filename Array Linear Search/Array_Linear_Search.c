#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tLinear Search!\n");
    int i, n, search, flag=0;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the number to check for it's presence : ");
    scanf("%d", &search);

    for(i=0;i<n;i++)
    {
        if(search == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("\nFound");
    else
        printf("\nNot found");

    printf("\n");
    return 0;
}
