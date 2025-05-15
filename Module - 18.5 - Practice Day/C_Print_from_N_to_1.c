#include <stdio.h>

void repeat(int n, int i){
    if(i > n) return;
    repeat(n, i + 1);
    printf("%d ", i);
}



int main(){

    int n;
    scanf("%d", &n);
    repeat(n , 1);
    return 0;
}
