   #include <stdio.h>

int main() {
    // int r, c;
    // scanf("%d %d", &r, &c);

    int n;
    scanf("%d", &n);
    int arr[n][n]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            // printf("%d ", arr[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;

       
         for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j){
            primarySum += arr[i][j];
         }
         if(i + j == n - 1){
            secondarySum += arr[i][j];
         }
         
     
    }
}


    int result = primarySum - secondarySum;
    if(result < 0){
       result = result * (-1);
    }
    printf("%d", result);
 
    
    return 0;
}
