#include <stdio.h>


int allNumbers(int a[], int n)
{
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    allNumbers(a, n);
    

    return 0;
}
