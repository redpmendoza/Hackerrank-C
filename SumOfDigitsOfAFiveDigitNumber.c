#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create sum to hold sum of digits in n
    int sum = 0;
    
    // Loop to get the sum of digits in n
    while(n){
        sum += n % 10;
        n /= 10;
    }

    // Output sum
    printf("%d", sum);
}