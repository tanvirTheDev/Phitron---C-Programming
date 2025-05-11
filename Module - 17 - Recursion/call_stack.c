// #include <stdio.h>

// void hello(int i){
//     if(i == 5){
//         return 0;
//     }
//     printf("%d ", i);
//     hello(i + 1);
// }

// int main() {
//     int i = 1;
//     hello(i);
//     return 0;
// }


// reverse number

#include <stdio.h>

void hello(int i){
    if(i == 5){
        return;
    }
    hello(i + 1);
    printf("%d ", i);

}

int main() {
    int i = 1;
    hello(i);
    return 0;
}
