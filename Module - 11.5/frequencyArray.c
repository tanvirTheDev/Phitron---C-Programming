#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int a[n];
    int fre[6] = {0};
    // int count = 0, count2 = 0, count3 = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        fre[a[i]]++;
        // if(a[i] == 1)
        // {
        //     fre[0]++;
        // }
        // if(a[i] == 2)
        // {
        //     fre[1]++;
        // }
        // if(a[i] == 3)
        // {
        //     fre[2]++;
        // }
    }

    printf("%d\n", fre[0]);
    printf("%d\n", fre[1]);
    printf("%d", fre[2]);
    return 0;
}
