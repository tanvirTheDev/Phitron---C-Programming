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
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++ ){
            
           int sum = a[i] + a[j];
           if(sum == x){
            flag = 1;
            printf("YES");
           } 
        }
    }
    if(flag == 0){
        printf("NO");
    }

     return 0;
 }