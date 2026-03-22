// TO PRINT THE MAXIMUM DIGIT OF A NUMBER.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    int digit;
    int max = 0;
    while(num!=0){
        digit=num%10;
        if(digit>max){
            max=digit;
        }
        num=num/10;
    }
    printf("%d",max);
}