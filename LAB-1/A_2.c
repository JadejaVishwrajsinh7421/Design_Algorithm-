// calculate sum of the num 1 to n using recurssion

#include<stdio.h>
#include<time.h>
long long dig(int n);
void main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    clock_t start,end;
    start = clock();
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum += i;
    }
    end = clock();  
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sum of the numbers from 1 to %d is %d\n",num,sum);
    printf("Time taken to calculate the sum is %f seconds\n",time_taken);  

    long long sum_recursion = dig(num);
    printf("Sum of the numbers from 1 to %d using recursion is %lld\n",num,sum_recursion);

}
long long dig(int n){
    if(n==1){
        return 1;
    }
    return n + dig(n-1);
}