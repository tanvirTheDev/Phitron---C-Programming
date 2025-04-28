#include <stdio.h>

int main(){
    int N = 0;
    scanf("%d", &N);
    int arr[N];
   
        
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);
    } 
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
       
    }  
    printf("%d ", max);
    printf("%d ", min);

  
    
    return 0;
}


