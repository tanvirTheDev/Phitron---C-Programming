#include <stdio.h>

void repeat(int n, int i){
    if(i > n) return;
    printf("%d\n", i);
    repeat(n, i + 1);
    
}



int main(){

    int n;
    scanf("%d", &n);
    repeat(n , 1);
    return 0;
}
