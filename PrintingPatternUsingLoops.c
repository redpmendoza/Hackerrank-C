#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = n; ctr >= 1; ctr--){
        for(int ctr2 = n; ctr2 > ctr; ctr2--){
            printf("%d ", ctr2);
        }
        for(int ctr2 = 1; ctr2 <= 2 *  ctr - 1; ctr2++){
            printf("%d ", ctr);
        }
        for(int ctr2 = ctr + 1; ctr2 <= n; ctr2++){
            printf("%d ", ctr2);
        }
        printf("\n");
    }
    for(int ctr = 1; ctr < n; ctr++){
        for(int ctr2 = n; ctr2 > ctr; ctr2--){
            printf("%d ", ctr2);
        }
        for(int ctr2 = 1; ctr2 <= 2 * ctr - 1; ctr2++){
            printf("%d ", ctr + 1);
        }
        for(int ctr2 = ctr + 1; ctr2 <= n; ctr2++){
            printf("%d ", ctr2);
        }
        printf("\n");
    }
}