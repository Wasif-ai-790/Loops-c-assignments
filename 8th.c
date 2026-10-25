#include<stdio.h>

int main(){
     int n,rev=0;
     scanf("%d",&n);
    while (n != 0) {
        int digit = n % 10;     
        rev = rev + digit; 
        n = n / 10; 
    }            
     printf("%d",rev);
     
     

    return 0;
}