// print prime factors of a  number by recurrion use efficient algorithm
#include <stdio.h>
#include <time.h>
void main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    clock_t start,end;
    start = clock();
    printf("Prime factors of %d are: ",num);
    for(int i=2;i*i<=num/2;i++){
        while(num%i==0){
            printf("%d ",i);
            num /= i;
        }
    }
    if(num>1){
        printf("%d",num);
    }
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken to calculate prime factors is %f seconds\n",time_taken);

}