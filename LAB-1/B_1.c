// fibbonaci series using recursion
#include <stdio.h>
#include <time.h>
long long fib(int n);
void main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    clock_t start,end;
    start = clock();
    long long result = fib(num);
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The %d th term in the Fibonacci series is %lld\n",num,result);
    printf("Time taken to calculate the Fibonacci term is %f seconds\n",time_taken);
}
long long fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
} 