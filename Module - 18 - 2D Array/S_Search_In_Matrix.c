   #include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    // int n;
    // scanf("%d", &n);
    int arr[r][c]; 
   

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            // printf("%d ", arr[i][j]);
        }
    }

     int n;
    scanf("%d", &n);
    int found = 0;

       for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
             if ( arr[i][j] == n){
                found = 1;
                printf("will not take number");
                return 0;
    }
        }
    }

    if(found == 0) printf("will take number");

    
    return 0;
}
