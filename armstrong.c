// To check if a number is an armstrong number or not
// Start
// Declaration of variable - (num)
// User enter the number
// Declaration of count,digit,temp variable
// Using while loop to count the digits
// Again using while loop and then for loop to separate the digits and multiply them
// Addition after for loop



#include<stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    int temp=num;
    int count=0;
    int digit;
    int sum=0;
    int i;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp = num;    // Resetting the value
    while(temp!=0){
        digit=temp%10;
        int armstrong = 1; // Reset for each digit
        for(i=0;i<count;i++){
            armstrong = armstrong*digit;     // multiply to its power as loop runs
        }
        sum+=armstrong;     // Addition after loop
        temp=temp/10;       // Removes last digit
    }
    if(num==sum){
        printf("%d is an Armstrong number.",num);
    }
    else{
        printf("%d is not an armstrong number.",num);
    }
}