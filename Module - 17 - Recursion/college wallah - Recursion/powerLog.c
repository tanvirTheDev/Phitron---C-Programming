#include <stdio.h>


int powerlog(int a, int b){      
   if(b == 1) return a;
   int x =  powerlog(a, b / 2);
    // int recAns = x * x;
    if (b % 2 == 0) return x * x;
    else return x * x * a;
    
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
    int p = powerlog(a, b);
    printf("%d", p);
 
  return 0;
}
