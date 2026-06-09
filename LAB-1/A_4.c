// power of any number using recursion
#include <stdio.h>
#include<time.h>

long long power_r(int num,int pow);
void main(){
    int num,power;
    printf("Enter the number and power");
    scanf("%d%d",&num,&power);

    clock_t start,end;
    start = clock();
    long long result = 1;
    for(int i=1;i<=power;i++){
        result *= num;
    }
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%d r    aised to the power of %d is %lld\n",num,power,result);
    printf("Time taken to calculate the power is %f seconds\n",time_taken);
    long long result_recursion = power_r(num,power);
    printf("%d raised to the power of %d using recursion is %lld\n",num,power,result_recursion);

}
long long power_r(int num,int pow){
    if(pow==0){
        return 1;
    }
    return num * power_r(num,pow-1);
}