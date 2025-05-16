#include <stdio.h>
#include <string.h>


 int fact(int n){
    if(n == 1) return 1;
    int fac = n * fact(n - 1);
    return fac;
    
 }

int main(){
    int n;
    scanf("%d", &n);
    int factVal = fact(n);
    printf("%d", factVal);
    

    return 0;
}