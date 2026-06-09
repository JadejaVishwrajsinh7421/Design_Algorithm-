// count digits in a number
#include <stdio.h>
#include <time.h>

int count_digits(int);  
void main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    clock_t start,end;
    start = clock();
    int count = count_digits(num);
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Number of digits in %d is %d\n",num,count);
    printf("Time taken to count digits is %f seconds\n",time_taken);
}
int count_digits(int n){
    if(n==0){
        return 0;
    }
    return 1 + count_digits(n/10);
}
