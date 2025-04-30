#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    char s[101];
    printf("%s", s);
    for(int i = 0; i < n; i++){
        scanf("%s", &s[i]);
        printf("%s\n", s[i]);
    }
 
}