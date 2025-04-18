#include <stdio.h>
int main() {
    int N;
    int deductFromN = 0;
    scanf("%d",&N);
    if(N > 1000){
        printf("I will buy Punjabi\n");
        deductFromN = N-1000;
        if(deductFromN >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}