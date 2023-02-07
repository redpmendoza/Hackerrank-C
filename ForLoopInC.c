#include<stdio.h>

int main(){

    // Create a and b
    int a, b;

    // Get a and b
    scanf("%d", &a);
    scanf("%d", &b);

    // Output word equivalent and odd or even of numbers between a and b
    for(int ctr = a; ctr < b + 1; ctr++){

        // Output word equivalent 
        if(ctr >= 1 && ctr <= 9){
            if(ctr == 1){
                printf("one\n");
            }
            else if(ctr == 2){
                printf("two\n");
            }
            else if(ctr == 3){
                printf("three\n");
            }
            else if(ctr == 4){
                printf("four\n");
            }
            else if(ctr == 5){
                printf("five\n");
            }
            else if(ctr == 6){
                printf("six\n");
            }
            else if(ctr == 7){
                printf("seven\n");
            }
            else if(ctr == 8){
                printf("eight\n");
            }
            else if(ctr == 9){
                printf("nine\n");
            }
        }

        // Output if even or odd
        else{
            if(ctr % 2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }
}