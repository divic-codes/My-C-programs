// TO PRINT NUMBERS 1 TO 5 IN A SYSTEMATIC PATTERN
// LIKE GIVEN BELOW :
// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>
int main(){
    int i;
    for(i=1; i < 6; i++){
        for(int j = 1 ; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
}
}
