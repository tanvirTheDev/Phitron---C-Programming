#include <stdio.h>
// prcatice problem 1
// int main () {
//     int n = 0;
//     int sum = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = n - 1; i >= 0; i-- ){
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//         sum += arr[i];
//     }
//     printf("%d", sum);

//     return 0;
// }


// practice problem 2
// int main () {
//     int arr[5] = {5, 10, 5, 47,44};
//     for(int i = 0; i < 5; i++){
//         // printf("%d ", arr[i]);
//         if(arr[i] % 2 != 0){
//             int isDublicate = 0;
//             for(int j = 0; j < i; j++){
//                 if(arr[i] == arr[j]){
//                 isDublicate = 1;
//                 break;
//                 }

//             }
//             if(!isDublicate){
//                 printf("%d ", arr[i]);
//             }
//             // printf("%d ", arr[i]);
//         }
//     }
      
//     return 0;
// }


// practice problem 3

// int main () {
//     int arr[5];
//     int oddCount = 0;
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         if(arr[i] % 2 != 0){
//             printf("%d ", arr[i]);
//             oddCount++;
//         }
//     }
//     printf("%d", oddCount);
    
//     return 0;
// }

// prcatice problem 4

// int main () {
//     int arr[5];
//     int max = 0;
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }  
//     max = arr[0];
//     for(int i = 0; i < 5; i++)
//     {
//         if(max < arr[i])
//         max = arr[i];
//     }  
//     printf("%d ", max);
//     return 0;
// }


// prcatice problem 5

// int main () {
//     int arr[5];
//     int min = 0;
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }  
//     min = arr[4];
//     for(int i = 0; i < 5; i++)
//     {
//         if(min > arr[i])
//         min = arr[i];
//     }  
//     printf("%d ", min);
//     return 0;
// }