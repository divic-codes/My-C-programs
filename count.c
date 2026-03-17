// To count how many numbers from 1-100 are divisible by 9.
#include<stdio.h>
int main(){
    int i;
    int count=0;
    for(i=1;i<=100;i++){ 
        if(i%9==0){
            count++;
        }
}
printf("%d",count);
}
    


