// Merge sort code in c

#include <stdio.h>

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int m = low; m <= high; m++)
    {
        A[m] = B[m];
    }
}

void mergeSort(int arr[],int low,int high)
{
    int mid;

    if(low<high)
    {
         mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid, low, high);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }



}
