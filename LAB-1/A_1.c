//  write factorial of  a integer

#include <stdio.h>
#include <time.h>
long long factorial(int);
long long factorial_i(num);

void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    long rec = factorial(num);
    long itr = factorial_i(num);
    clock_t start = clock();
    printf("%d by recurssive way",rec);
    clock_t end = clock();

    clock_t start1 = clock();
    printf("%d by iteravtive ",itr);
    clock_t end1 = clock();
    
    double time_taken = (double)(start-end)/ CLOCKS_PER_SEC ;
    printf("time taken %f",time_taken);

    double time_taken = (double)(start1-end1)/ CLOCKS_PER_SEC;
    printf("time taken %f",time_taken);
}
long long factorial(int n){
    if(n==1|| n==0){
        return 1;
    }
    return n*factorial(n-1);
}

long long factorial_i(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}