   #include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c]; // This is allowed in C99 and later (Variable Length Array)

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

     int flag = 0;

    if(r == c) {
       
         for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
         if(i + j == r - 1){

         }
         else{
             if(arr[i][j] != 0){
            flag = 1;
            printf("It is not secondary diagonal matrix");
          }
         }
    }
}
    }
    if(flag == 0){
        printf("it  is secondary diagonal matrix");
    }
    
    return 0;
}
