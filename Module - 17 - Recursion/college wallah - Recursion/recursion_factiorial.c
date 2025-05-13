
#include <stdio.h>

int factorial(int n){    
    if(n == 1 || n == 0) return 1;
   int factAns = n * factorial(n - 1);
   return factAns;
} 

int main() {
  int n;
  scanf("%d", &n);
  int fact = factorial(n);
  printf("%d", fact);
}
