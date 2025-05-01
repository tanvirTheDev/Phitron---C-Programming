#include <stdio.h>
#include <string.h>

int main() 
{

    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int concatination = strcat(b, a);
  //   int length1 = strlen(a);
  // int length2 =  strlen(b);
  

    // for(int i = 0; i <= length2; i++){
    //    a[i + length1] = b[i];
        
    // }
    printf("%s", concatination);


    return 0;
}