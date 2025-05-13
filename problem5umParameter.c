#include <stdio.h>


void sum(int n,  , int total){    
    if(i > n){
      printf("%d", total);
      return;
    }
    
    sum(n, i + 1, total + i);
    return;
} 

int main() {
  int n;
  scanf("%d", &n);
  sum(n, 1, 0);
 
  return 0;
}
