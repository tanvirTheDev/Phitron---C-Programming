// pattern - 1
// #include <stdio.h>
// int main(){ 
//     int n = 0;
//     scanf("%d", &n);
//     int start = 1;
//     int space = n - 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k = 1; k <= space; k++){
//             printf(" ");
//         }
//         space--;
//        for(int j = 1; j <= start; j++)
//        {
        
//         printf("*");
//        }
//         printf("\n");
//         start = start + 2;
//     }
    
    
//      return 0;
//  }

// patten - 2
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int start = 1;
//     int space = n - 1;
//     for(int i = 1; i <= n; i++){
//         for(int k = 1; k <= space; k++){
//             printf(" ");
//         }
//         space--;
//         for(int j = 1; j <= start; j++){
//             printf("%d ", j);
          
//         }
//         printf("\n");
//         start++;
//     }
//     return 0;
// }

// pateern - 3

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int start = 1;
//     int space = n - 1;
//     for(int i = 1; i <= n; i++){
//         for(int k = 1; k <= space; k++){
//             printf(" ");
//         }
//         space--;
//         for(int j = 1; j <= start; j++){
//             printf("%c ", 'A' + j - 1);
          
//         }
//         printf("\n");
//         start++;
//     }
//     return 0;
// }

// pattern - 4

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int start = n;
//     int space = n;
//     for(int i = 1; i <= n; i++){
//         for(int k = n + 1; k <= space; k++){
//             printf(" ");
//         }
//         space++;
//         for(int j = 1; j <= start; j++){
//             printf("*");
          
//         }
//         printf("\n");
//         start--;
//     }
//     return 0;
// }