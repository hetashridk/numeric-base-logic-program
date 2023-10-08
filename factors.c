#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("\n%d", i);
            count++;
        }
    }

    printf("\nfactors count are: %d", count);
}