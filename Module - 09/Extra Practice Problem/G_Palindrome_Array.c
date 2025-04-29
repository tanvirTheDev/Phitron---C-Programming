#include <stdio.h>

int main(){
    int N = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = N - 1;
        while(i < j){
            if(arr[i] != arr[j]){
                printf("NO");
                return 0;
            }
            i++;
            j--;
        }
      
        printf("YES");
        // printf("%d ", arr[i]);
    
  

    return 0;
}
