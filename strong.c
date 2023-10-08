#include<stdio.h>
int factorial(int num){
    int res = 1;
    for(int i = 1; i <= num; i++){
        res *= i;
    }
    return res;
}
int main() {
    int num, rem, sum = 0;
    int temp = num;
    while(num){
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }


    if(temp == sum){
         printf("Yes strong");
    }
    else{
        printf("No strong");
    }

}