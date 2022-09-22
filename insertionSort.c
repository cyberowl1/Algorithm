// insertion sort in c.


#include <stdio.h>


void insertion(int arr[],int size){

    for(int i=1;i<size;i++){
        int key,i,j;
        for(i=1;i<size;i++){
            key=arr[i];
            j=i-1;

            while(j>=0 && key<arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    for(int m=0;m<size;m++)
    {
        printf("%d ",arr[m]);
    }
}
int main(){

    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        int num;
        scanf("%d",&num);
        arr[i]=num;
    }
    insertion(arr,size);
}
