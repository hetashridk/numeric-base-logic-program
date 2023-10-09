#include<stdio.h>
int main(){
    int num = 17, count = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("\n%d", i);
        }
    }

}