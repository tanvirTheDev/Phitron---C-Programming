#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int arr[n];

   
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);
       for (int i = 0; i < n; i++) {
     
            if(arr[i] == x){
                printf("%d", i);
                return 0;
            }
    }
   printf("-1");
    return 0;
}