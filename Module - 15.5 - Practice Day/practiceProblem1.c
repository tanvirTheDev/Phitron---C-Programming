#include <stdio.h>

int my_abs(int n){
    if(n < 0){
        int absolute =  n * (-1);
        return absolute;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int s = my_abs(n);
    printf("%d", s);
    return 0;
}
