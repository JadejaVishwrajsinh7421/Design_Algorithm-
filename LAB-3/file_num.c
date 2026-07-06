#include<stdio.h>
#include<stdlib.h>

void bestCase(){
    FILE *fp;
    fp = fopen("bestcase1000.txt", "w");
    for(int i=1; i<=1000; i++){
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
}

void worstCase(){
    FILE *fp1;
    fp1 = fopen("worstcase1000.txt", "w");
    for(int i=1000; i>=1; i--){
        fprintf(fp1, "%d\n", i);
    }
    fclose(fp1);
}

void averageCase(){
    FILE *fp2;
    fp2 = fopen("averagecase1000.txt", "w");
    for(int i=1; i<=1000; i++){
        fprintf(fp2, "%d\n", rand() % 1000 + 1);
    }
    fclose(fp2);
}

int main(){
    bestCase();
    worstCase();
    averageCase();
    return 0;
}