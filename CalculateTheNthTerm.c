#include<stdio.h>

// Function find_nth_term prototype
int find_nth_term(int n, int a, int b, int c);

// Main
int main(){
    
    // Create n, a, b, and c
    int n, a, b, c;

    // Get n, a, b, and c
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
    // Get ans
    int ans = find_nth_term(n, a, b, c);

    // Output ans
    printf("%d", ans);
}

// Function find_nth_term definition
int find_nth_term(int n, int a, int b, int c){
    
    // Get the nth term in the series
    if(n == 1){
        return a;
    }
    else if(n == 2){
        return b;
    }
    else if(n == 3){
        return c;
    }
    else{
        return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);
    }
}