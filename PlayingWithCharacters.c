#include<stdio.h>

int main(){

    // Create ch, s, and sen
    char ch;
    char s[100];
    char sen[100];

    // Get ch, s, and sen
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    
    // Output ch, s, and sen
    printf("%c\n" ,ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}
