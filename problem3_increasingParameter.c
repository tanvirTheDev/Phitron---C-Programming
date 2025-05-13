
#include <stdio.h>

void goodMorning(int n, int i){    
    if(i == 5) return;
    printf("%d\n", i);
    goodMorning(n, i + 1);
} 

int main() {
  int n;
  scanf("%d", &n);
  goodMorning(n, 1);
 
  return 0;
}
