#include <stdio.h>

int maximum(int a[], int n, int i){
    if(i == n - 1) return a[i];  // শেষ উপাদানে গেলে ওটাই return
    int v = maximum(a, n, i + 1);  // বাকি উপাদান থেকে বড় কে?
    if(a[i] > v) return a[i];      // নিজেরটা বড় হলে রিটার্ন
    else return v;                 // না হলে বাকি অংশের বড়টাই ফেরত দাও
}

int main(){
    int n;
    scanf("%d", &n);         // কতগুলো সংখ্যা ইনপুট নেবে
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);  // সংখ্যা ইনপুট নাও
    }
    int maxVal = maximum(a, n, 0);  // রিকার্সিভভাবে বড় বের করো
    printf("%d", maxVal);           // প্রিন্ট করো
    return 0;
}
