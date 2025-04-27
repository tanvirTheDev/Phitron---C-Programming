#include <stdio.h>

int main(){
    int N = 0;
    scanf("%d", &N);
    int arr[N];
    int sumPos = 0;
    int sumNeg = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] > 0){
            sumPos += arr[i];
            
        }
         else {
            sumNeg +=  arr[i];
        }
        
    }  
    printf("%d ", sumPos);
    printf("%d", sumNeg);
  
    return 0;
}
