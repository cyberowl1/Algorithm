// Selection sort in c language.
#include <stdio.h>


int premax(int arr[],int start,int size)
{
    int min=start;
   for(int i=start;i<size;i++)
   {
       if(arr[i]<arr[min]){
           min=i;
       }
       
   }
   return min;
}
void selection(int arr[],int size){
    for(int i=0;i<size;i++){
        int minindex = premax(arr,i,size);
        int temp;
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i =0;i<size;i++)
    {
        int num;
        scanf("%d",&num);
        arr[i]=num;
    }

    selection(arr,size);
}
