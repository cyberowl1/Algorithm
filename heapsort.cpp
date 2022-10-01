// this contain implementation of heapsort. Contain 3 function heapify, heapsort, and printArray.



#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int* b)
{
    int* temp =a;
    a=b;
    b=temp;
}
void heapify(int arr[],int n,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest])
    {
        largest =l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        largest =r;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);

        heapify(arr,n,largest);
    }

}
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
 void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);


      heapify(arr, i, 0);
    }
  }
int main()
{
    int arr[8]={4,5,2,6,76,8,3,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    heapSort(arr,n);
    printArray(arr,n);


}
