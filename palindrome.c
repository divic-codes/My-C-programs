// TO CHECK IF A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
int main(){
    int num; // Variable declaration
    printf("Enter any number :"); // User enters the number
    scanf("%d",&num); // Takes input
    int digit;  // Holds the last digit
    int rev=0;  // Takes the separated digit
    int x=num;  // Copy of original number
    while(x!=0){
        digit=x%10;  // Takes the last digit
        x=x/10;       // Separate the last digit
        rev=rev*10+digit; // Builds the palindrome 
    }
    if(num==rev){
    printf("%d is palindrome",num);
    } else{
        printf("%d is not a palindrome",num);
    }
