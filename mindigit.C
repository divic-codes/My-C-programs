// TO PRINT MINIMUM DIGIT OF A NUMBER.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int digit;
    int min=9;
    
    while(num!=0){
        digit=num%10;
        if(digit<min){
            min=digit;
    }
        num=num/10;
    }
    printf("%d is the smallest digit",min);
}
    