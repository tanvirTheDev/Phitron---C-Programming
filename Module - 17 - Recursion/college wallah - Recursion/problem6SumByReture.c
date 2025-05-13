
#include <stdio.h>

int sumAll(int n){    
    if(n == 1 || n == 0) return 1;
   int sum = n + sumAll(n - 1);
   return sum;
} 

int main() {
  int n;
  scanf("%d", &n);
  int sum = sumAll(n);
  printf("%d", sum);
}
