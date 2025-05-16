#include <stdio.h>

void repeat(int n){
    if(n == 0) return;
    
    repeat(n / 10);
    printf("%d ", n % 10);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        
    int n;
    scanf("%d", &n);
    if(n == 0) printf("0"); 
     repeat(n);
     printf("\n");
    }
   

    return 0;
}