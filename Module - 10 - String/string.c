# include <stdio.h>
# include <string.h>
// int main(){
//     char s[20];
//     scanf("%s", &s);
//     // fgets(s, 14, stdin);
//     printf("%s\n", s);
// }


// int main(){
//     char s[101];
//     scanf("%s", &s);
//     // fgets(s, 14, stdin);
//     // printf("%s", s);
//     int count = 0;
//     for(int i = 0; s[i] != '\0'; i++){
//         count++;
//     }
//     printf("%d", count);
// }

int main(){
    char s[20];
    scanf("%s", &s);
    // fgets(s, 14, stdin);
    printf("%d", strlen(s));
}