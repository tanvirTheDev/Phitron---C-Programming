#include <stdio.h>

int change_it(int a[], int n){
  
    
   a[n - 1] = 100;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    change_it(arr, n);
    for(int i = 0; i < n; i++){
       
       
         printf("%d ", arr[i]);
     }
    return 0;
}
