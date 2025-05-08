#include <stdio.h>

int my_len(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
         count++;
        
    }
    return count;
    // printf("%d", count);
}

int main() {
    char s[100];
    scanf("%s", &s);
    int result = my_len(s);
    printf("%d", result);
    // printf("%c", s[5]);
    return 0;
}
