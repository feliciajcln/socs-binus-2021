#include <stdio.h>
#include <string.h>

int x(char S[]){
    for (int i= 0; i<strlen(S); i++){
         if (S[i] != S[strlen(S)-1-i]){
             return(0);
        }
    }
    return(1);
}

int main (){
    int T;
	scanf("%d", &T);
	char S[501];
    for (int i=1; i<=T; i++){
        scanf("%s", S);
        if (x(S)==1){
            printf("Case #%d: Yay, it's a palindrome\n", i);
        }
        else{
            printf("Case #%d: Nah, it's not a palindrome\n", i);
        }
    }
}
