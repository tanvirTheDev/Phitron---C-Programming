 
// #include <stdio.h>

// int stairs(int n){
//   if(n <= 2) return n;
//   return stairs(n - 1) + stairs(n - 2);
// }

// int main() {
//   int n;
//   scanf("%d", &n);
  
//  printf("%d ", stairs(n));
//   return 0;
// }

// Triple step

#include <stdio.h>

int stairs(int n){
   if (n == 0) return 1;   // Only 1 way to stay on the ground
  if (n < 0) return 0; 
  return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}

int main() {
  int n;
  scanf("%d", &n);
  
 printf("%d ", stairs(n));
  return 0;
}

