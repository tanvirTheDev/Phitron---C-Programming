#include <stdio.h>

void hello(int i){
    
    printf("%d", i);
    hello(i + 1);
}

int main() {
    int i = 5;
    hello(i);
    return 0;
}
