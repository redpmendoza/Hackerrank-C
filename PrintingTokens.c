#include<stdio.h>
#include<string.h>

int main(){

    // Create s
    char s[1000];

    // Get s
    gets(s);

    // Output if s is space or is a character
    for(int ctr = 0; ctr < strlen(s); ctr++){
        if(s[ctr] == ' '){
            printf("\n");
        }
        else{
            printf("%c", s[ctr]);
        }
    }
}