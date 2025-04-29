#include <stdio.h>
#include <string.h>

int main(){
   char s[100001];
  scanf("%s", &s);
//    printf("%s", s);
   int length = strlen(s);
//    printf("%d", length);
   for(int i = 0; i < length; i++){
    if(s[i] == ','){
        s[i] = ' ';
    }
    else if(s[i] >= 'a' && s[i] <= 'z'){
        s[i] = s[i] - 32;
    }
    else{
        s[i] = s[i] + 32; 
    }
   }
   printf("%s", s);
    return 0;
}