#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(a[i] != a[j]){
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");

    return 0;
}