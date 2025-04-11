//Bubble sort

#include<Stdio.h>
#include<stdlib.h>
//function to perform bubble sort

void bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
                }
            }
}
//function to print array
void displayArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
}
int main(){
    int n,arr[100];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        printf("Original array is:\n");
        displayArray(arr,n);
        bubblesort(arr,n);
        printf("\nSorted array is:\n");
        displayArray(arr,n);
        return 0;
}