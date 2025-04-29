#include <stdio.h>
#include <string.h>

int main(){
   char s[1001];
  scanf("%s", &s);
//    printf("%c", s);
int length = strlen(s);
//  printf("%d", length);

//    for(int i = 0, j = length - 1; s[i] != '\0'; i++, j--){
//     if(s[i] != s[j]){
//         printf("NO");
//         return 0;
//       }
//    }


   
//    int length = strlen(s);
//    printf("%d", length);
//    for(int i = 0; i < length; i++){
//     printf("%s", i);
//    }
   int i = 0;
   int j = length - 1;
//    printf("%d", j);
       while(i < j){
           if(s[i] != s[j]){
               printf("NO");
               return 0;
           }
           i++;
           j--;
       }
printf("YES");
    return 0;
}