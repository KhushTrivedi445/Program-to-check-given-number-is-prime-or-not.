#include<stdio.h>
int main () {
    int n,factor=0;
    printf("Enter the number to check prime number or not :");
    scanf("%d",&n);

     for(int i=1;i<=n;i++){
        if(n%i==0) {
            factor=factor+1;
            
        }
        }

if(factor==2) {
    printf("\n%d is prime number ",n);
} else {
    printf("Not a prime number ",n);
} 
 
 return 0;
}