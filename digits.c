// TO COUNT THE NUMBER OF DIGITS IN A GIVEN NUMBER.
#include<stdio.h>
int main(){
   int i;            // Variable declaration 
   int digit=0;
   printf("Enter any number :");
   scanf("%d",&i);
   while(i!=0){      // Using while loop   
      i=i/10;
      digit++;     // Increase count of digits by one as followed by loop 
   }
   printf("%d",digit);  // Prints the no. of digits.
}
