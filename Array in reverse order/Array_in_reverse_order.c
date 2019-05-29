#include<stdio.h>

int main()
{
    printf("\n\t Array in Reverse\n");
    int i,n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nThe array in reverse order is\n");
    for(i=n-1;i>=0;i--)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
