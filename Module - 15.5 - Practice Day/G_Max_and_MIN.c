#include <stdio.h>
#include <limits.h>

void maxNum(int arr[], int n)
{
    int max = 0;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        
            if(arr[i] < min){
                min = arr[i];
            }
            if(arr[i] > max){
                max = arr[i];
            }
        
    }
    printf("%d %d", min, max);
}

int main()
{
 int n;
 scanf("%d", &n);
 int arr[n];
 for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
 }

 maxNum(arr, n);
    return 0;
}
