// Given two integers n and m(m!=0). Find the number closest closest to n and divisible by m. If there are two such integers, print the maximum absolute value.

#include <stdio.h>
#include<stdlib.h>

void main(){
    int n,m;
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);
    int quotient = n / m;
    int remainder = n % m;
    
    int candidate1 = quotient * m; // Closest multiple of m less than or equal to n
    int candidate2 = (quotient + 1) * m; // Closest multiple of m greater than n

    if(abs(candidate1 - n) < abs(candidate2 - n)) {
        printf("The closest number to %d that is divisible by %d is: %d\n", n, m, candidate1);
    } else if (abs(candidate1 - n) > abs(candidate2 - n)) {
        printf("The closest number to %d that is divisible by %d is: %d\n", n, m, candidate2);
    } else {
        // If both candidates are equally close, print the one with the maximum absolute value
        if (abs(candidate1) > abs(candidate2)) {
            printf("The closest number to %d that is divisible by %d is: %d\n", n, m, candidate1);
        } else {
            printf("The closest number to %d that is divisible by %d is: %d\n", n, m, candidate2);
        }
    }
}