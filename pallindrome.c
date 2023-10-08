#include<stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while(num){
        rev = rev * 10 +  num % 10;
        num /= 10;
    }

    if(temp == rev){
         printf("Yes Pallindrome");
    }
    else{
        printf("No Pallindrome");
    }

}