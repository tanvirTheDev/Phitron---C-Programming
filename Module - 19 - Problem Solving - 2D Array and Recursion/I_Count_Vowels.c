#include <stdio.h>
#include <string.h>


 int rec(char s[], int i){
    if(s[i] == '\0') return 0;
    int cnt = rec(s, i + 1);
    int v = s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U';
    if(v) return cnt + 1;
    else return cnt;
    
 }

int main(){

    char s[201];
    fgets(s, 201, stdin);
    int length = strlen(s);
    // printf("%d", length);
    
  
    int result = rec(s, 0);
    printf("%d", result);
    

    return 0;
}