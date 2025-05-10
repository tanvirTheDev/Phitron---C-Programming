#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
  int length = strlen(s);
  int count = 1;
   int i = 0;
   int j = length - 1;
   while(i < j){
    if(s[i] != s[j]){
        return count = 0;
        break;
    }
    i++;
    j--;
   }
   return count;
}

int main() {
    char s[1000];
    scanf("%s", &s);
    int result = is_palindrome(s);
    if(result == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

   
   
    return 0;
}
