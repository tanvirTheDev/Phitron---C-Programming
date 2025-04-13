// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//    for(int i = 0; i <= n; i++)
//    {
//          sum += i;
//     }
//      printf("Sum = %d\n", sum);
//      for(int i = 0; i <= n; i++)
//      {
//           if(i % 2 == 0)
//           {
//                 printf("%d\n", i);
//           } 
//    }
//     return 0;
// }


#include <stdio.h>

int main() 

{
    int N;
    scanf("%d", &N);
    if(N > 1000)
    {
        printf("I will buy Punjabi\n");
    }
    if(N >= 1500 )
    {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    if(N <= 1000){
        printf("Bad luck!\n");
    }

}