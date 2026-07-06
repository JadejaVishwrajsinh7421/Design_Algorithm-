// subarray print but only adjacent elements
#include<stdio.h>
#include<stdlib.h>

void main(){
    int size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array: ");    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            
           for(int k = i;k<=j;k++){
           
            printf("[%d] ",arr[k]);
           }
           printf("\n");
        }
    }
    printf("]");
}
