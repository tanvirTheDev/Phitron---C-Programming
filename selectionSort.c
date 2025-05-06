#include <stdio.h>
int main(){ 
    int n = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = 0;
    scanf("%d", &x);
 
    for(int i = 0; i < n  - 1; i++)
    {
        for(int j = i + 1; j < n; j++ ){
           if(a[i] < a[j]){
            int s = a[i];
             a[i] = a[j];
             a[j] = s;
           } 
        //   printf("%d ", a[i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    

     return 0;
 }