#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int start = 1;
    int startDashed = 1;
    int space = n - 1;
    for(int i = 0; i <= 2 * n - 1; i++){
        
        if(i % 2 == 0){
            for (int s = 0; s < space; s++) {
            printf(" ");
        }
        // space--;
            for(int i = 1; i <= start; i++){
                    printf("#");
            }
        }
            else{
                for (int s = 0; s < space; s++) {
            printf(" ");
        }
        // space--;
                for(int i = 1; i <= startDashed; i++){
                    printf("-");
                }
            }
            // start = start + 2;
            // startDashed = startDashed + 2;

            if(i < (2 * n - 1) - n){
                space--;
                start = start + 2;
                startDashed = startDashed + 2;
            }
            else{
                space++;
                start = start - 2;
                startDashed = startDashed - 2;
            }
            printf("\n");
        }
        
    
    return 0;
}
