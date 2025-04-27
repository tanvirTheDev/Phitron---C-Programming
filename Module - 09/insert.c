#include <stdio.h>

int main(){
    int N = 0;
    scanf("%d", &N);
    int arr[N + 1];
   
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]); 
    }
    int index = 0, val = 0;
    scanf("%d", &index);
    scanf("%d", &val);
    for(int i = N; i >= index + 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    for(int i = 0; i <= N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
