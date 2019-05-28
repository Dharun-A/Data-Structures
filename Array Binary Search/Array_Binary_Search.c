#include <stdio.h>
#include <stdlib.h>
void sort(int *arr, int n)
{
    int temp, j, k;
    for(j=1;j<=n;j++)
        for(k=j+1;k<=n;k++)
    {
        if(arr[j]>arr[k])
        {
            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }
    }
}
int main()
{
    printf("\n\tBinary Search\n");
    printf("\nFor binary search, the array must be sorted.\nSo this program has a sorting function after which binary search is done.\n");
    int i, n, search, middle;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the array elements : ");
    for(i=1;i<=n;i++)
        scanf("%d", &arr[i]);
    sort(arr,n);

    printf("\nThe sorted array is \n");
    for(i=1;i<=n;i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("\nEnter the elements to be found : ");
    scanf("%d", &search);
    int lower=1, upper=n;
    while(lower<upper)
    {
        middle = (lower+upper)/2;
        if(search>arr[middle])
            lower=middle+1;
        else
            upper = middle;
    }
    if(arr[lower] == search)
        printf("\nFound");
    else
        printf("\nNot found");

    printf("\n");
    return 0;
}
