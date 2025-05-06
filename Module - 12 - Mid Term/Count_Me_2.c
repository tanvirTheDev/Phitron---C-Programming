#include <stdio.h>
#include <string.h>
int main(){
   char S[1000001];
   scanf("%s", &S);
    int length = strlen(S);
    int count = 0;
    for(int i = 0; i < length; i++){

        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            count++;
        }
    }
    int constant = length - count;
    printf("%d", constant);
    return 0;
}