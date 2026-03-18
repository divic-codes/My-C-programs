// TO CHECK IF A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
int main(){
    int i;
    printf("Enter any number :");
    scanf("%d",&i);
    int digit;
    int rev=0;
    int x=i;
    while(x!=0){
        digit=x%10;
        x=x/10;
        rev=rev*10+digit;
    }
    if(i==x){
    printf("%d is palindrome",i);
    } else{
        printf("%d is not a palindrome",i);
    }
}