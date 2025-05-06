#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int  val = c - ((a * c) / (a + b));
        // printf("%d ", a);
        printf("%d\n", val);
    }
    // int first = arr[0];
    // int last = arr[2];
    // int mid = arr[1] + arr[0];
    // int val = (first * last) / mid;
    // int acc = val - arr[1];  
     return 0;
 }