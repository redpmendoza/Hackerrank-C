#include<stdio.h>
#include<string.h>

int main(){

    // Create num
    char num[1000];

    // Create array for counting
    int count[] = {0,0,0,0,0,0,0,0,0,0};

    // Get num
    gets(num);

    // Loop in num length times
    for(int ctr = 0; ctr < strlen(num); ctr++){
        
        // Get value of element
        char n = num[ctr];

        // Check what number is the element and increment its count
        switch(n){
            case '0':
                count[0]++;
            break;
            case '1':
                count[1]++;
            break;
            case '2':
                count[2]++;
            break;
            case '3':
                count[3]++;
            break;
            case '4':
                count[4]++;
            break;
            case '5':
                count[5]++;
            break;
            case '6':
                count[6]++;
            break;
            case '7':
                count[7]++;
            break;
            case '8':
                count[8]++;
            break;
            case '9':
                count[9]++;
            break;
        }
    }

    // Output array count
    for(int ctr = 0; ctr < 10; ctr++){
        printf("%d ", count[ctr]);
    }
}