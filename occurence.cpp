This programm return first and last occurence position of any element from given array.
  -----------------------------------------------------------------------------


#include <iostream>

using namespace std;

int firstocc(int arr[],int size,int i,int key)
{
    if (i==size)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    else
    return firstocc(arr,size,i+1,key);
}

int lastoccur(int arr[],int size,int i,int key)
{
    if(i==size)
    {
        return -1;
    }
    int restArray= lastoccur(arr,size,i+1,key);

    if(restArray!=-1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[6]={1,2,3,4,2,5};

    cout<<lastoccur(arr,6,0,2);
}
