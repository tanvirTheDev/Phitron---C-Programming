#include <stdio.h>

int fact(int n){
    int nfect = 1;
for(int i = 2; i <= n; i++){
        nfect = i * nfect;
    }
    return nfect;
}
 
int main(){

    int n;
    scanf("%d", &n);
     int r;
    scanf("%d", &r);
    // int start = 1;  // n!
    // int rfec = 1; // r! 
    // int nrfec = 1; // (n - r)!
    // for(int i = 2; i <= n; i++){
    //     start = i * start;
      
    // }
    // for(int i = 2; i <= r; i++){
    //     rfec = i * rfec;
      
    // }
    //  for(int i = 2; i <= n - r; i++){
    //     nrfec = i * nrfec;
      
    // }
    // int ncr = start / (rfec * nrfec);
    //   printf("%d", ncr);
    int ncr = fact(n)/ (fact(r) * fact(n - r));
    printf("%d", ncr);
    return 0;
}