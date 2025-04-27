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
    for(int i = N - 1; i >= 0; i--){
        arr[index] = val;
        printf("%d ", arr[i]);
    }
    return 0;
}
