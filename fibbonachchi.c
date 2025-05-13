// #include <stdio.h>

// int main() {
//   int n;
//   scanf("%d", &n);
//   int a = 0, b = 1;
//     // if (n >= 1) printf("%d ", a);
   
//   if (n <= 2) printf("%d ", b) ;
//    int sum = 0;
//   for(int i = 2; i <= n; i++){
//     sum = a + b;
//     a = b;
//     b = sum; 
//     //  printf("%d ", sum);
//   }
//  printf("%d ", sum);
//   return 0;
// }


// recursion



#include <stdio.h>

int fibo(int n){
  if(n <= 2) return 1;
  return fibo(n - 1) + fibo(n - 2);
}

int main() {
  int n;
  scanf("%d", &n);
  
 printf("%d ", fibo(n));
  return 0;
}

