#include <stdio.h>
#include <string.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    char s[100001];
   for(int i = 0; i < n; i++){
    scanf("%s", s);
    // printf("%s\n", s);
    int length = strlen(s);
    int countCapital = 0;
    int countSmall = 0;
    int countNumber = 0;
    for(int i = 0; i < length; i++){
     if(s[i] >= 65 && s[i] <= 90)
     {
        //  printf("%c ", s[i]);
         countCapital++;
     }
     else if(s[i] >= 97 && s[i] <= 122)
     {
        countSmall++;
     }
     else if(s[i] >= 48 && s[i] <= 57)
     {
        countNumber++;
     }
    }
    printf("%d ", countCapital);
    printf("%d ", countSmall);
    printf("%d\n", countNumber);
   }
 
    return 0;
}