This code implements binary search on array.
  --------------------------------------
  #include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int e=0;
    int l=size;
    while(e<=l)
    {
        int mid=(e+l)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
        }
        else
        {
            e=mid+1;
        }
    }
return -1;
}
int main()
{
    int size;
    cin>>size;

    int arr[size];
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,size,key);

}
