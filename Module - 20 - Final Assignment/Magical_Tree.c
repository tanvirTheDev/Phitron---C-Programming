#include <stdio.h>

int main() {
 
    int n;
    scanf("%d", &n);
    int lines = (n / 2) + 6;
    int start = 1;
    int space = lines - 1;
    for(int i = 0; i < lines; i++){
        
           for(int j = 0; j < space; j++){
               printf(" ");
           }
           space--;
           for(int j = 0; j < start; j++){
               printf("*");
           }
           start = start + 2;
           printf("\n");
    
    }

  int width = n;
    int rows = 5;
    int star_space = lines - (width / 2) - 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < star_space; j++) {
            printf(" ");
        }
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
