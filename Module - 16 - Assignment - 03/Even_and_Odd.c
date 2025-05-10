#include <stdio.h>

#include <string.h>

void odd_even(){
       int n;
   scanf("%d", &n);
   int a[n];
   
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int countEven = 0;
    int countOdd = 0;
     for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            countEven++;
            // printf("%d ", a[i]);
        }
        else{
            countOdd++;
        }
       
    }
    printf("%d %d", countEven, countOdd);
   
}


int main() {
    odd_even();
    return 0;
}
