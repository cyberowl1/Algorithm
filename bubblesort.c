// code for bubble sort .
// this checks first if array is already sorted. if it sorted it will not sort.
#include <stdio.h>


int ifsorted(int arr[],int size){
    for(int i =0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void bubblesort(int arr[],int size)
{
    int  sorted=ifsorted(arr,size);
    if(!sorted)
    {

   printf("sorted already\n");
   for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
   return ;
    }
    for(int i=0;i<size;i++)
{
    for(int j=i;j<size;j++)
    {
        if(arr[j]<arr[i])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
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
  for(int i=0;i<size;i++)
  {
      int num;
      scanf("%d",&num);
      arr[i]=num;
  }
  bubblesort(arr,size);
}
