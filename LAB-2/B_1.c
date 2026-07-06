// given an arr[] of size n the task is to rearrange it in alternate +ve and -ve manner withou changing the relative order of elements of positive and negative numbers.
// in case there are more positive numbers they appear at the end of the array and if there are more negative numbers they appear at the end of the array.

#include<stdio.h>

void rearrange(int [],int);

void rearrange(int arr[],int size){
    int pos[size],neg[size];
    int pos_index=0,neg_index=0;

    for(int i=0;i<size;i++){
        if(arr[i]>0){
            pos[pos_index++]=arr[i];
        }
        else{
            neg[neg_index++]=arr[i];
        }
    }
    int i=0,j=0,k=0;
    while(i<pos_index && j<neg_index){
        arr[k++]=pos[i++];
        arr[k++]=neg[j++];
    }
    
}

void main(){
    int size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array: ");    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    rearrange(arr,size);
    
    printf("Rearranged array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

}

