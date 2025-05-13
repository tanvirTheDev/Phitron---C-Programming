// #include <stdio.h>


// int power(int a, int b){    
//    int x = 1;
//    for(int i = 0; i < b; i++){
//         x = x * a;
//    }
//    return x;
// } 

// int main() {
//   int a, b;
//   scanf("%d %d", &a, &b);
//     int p = power(a, b);
//     printf("%d", p);
 
//   return 0;
// }

// Recursion

#include <stdio.h>


int power(int a, int b){      
   if(b == 0) return 1;
    int recAns = a * power(a, (b - 1));
    return recAns;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
    int p = power(a, b);
    printf("%d", p);
 
  return 0;
}
