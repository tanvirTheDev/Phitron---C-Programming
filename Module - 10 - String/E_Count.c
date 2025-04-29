#include <stdio.h>
#include <string.h>

int main(){
    char s[1000001];
    // fgets(s, sizeof(s), stdin);
    scanf("%s", s);
    // int length = strlen(s);

    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++){
        sum += s[i] - '0';
        // printf("%d ", s[i]);
    }
    // fgets(s, 14, stdin);
    printf("%d", sum);
    return 0;
}