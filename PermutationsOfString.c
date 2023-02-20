#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s){
    
    /* Start of Not Generated Part */
    int ctr = n - 1;

    while(ctr > 0 && strcmp(s[ctr-1], s[ctr]) >= 0){
        ctr--;
    }

    if(ctr <= 0){
        return 0;
    }   
    
    int ctr2 = n - 1;

    while(strcmp(s[ctr-1],s[ctr2]) >= 0){
        ctr2--;
    }

    char *temp = s[ctr - 1];
    s[ctr - 1] = s[ctr2];
    s[ctr2] = temp;
    
    ctr2 = n - 1;

    while(ctr < ctr2){
        temp = s[ctr];
        s[ctr] = s[ctr2];
        s[ctr2] = temp;
        ctr++;
        ctr2--;
    }

    return 1;
    /* End of Not Generated Part */
}

int main(){
    
	char **s;
	int n;

	scanf("%d", &n);
	s = calloc(n, sizeof(char*));

	for (int i = 0; i < n; i++){
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}

	do{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} 
    while (next_permutation(n, s));

	for (int i = 0; i < n; i++)
		free(s[i]);

	free(s);
	return 0;
}