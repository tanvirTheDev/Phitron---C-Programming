#include <stdio.h>

// int main()

// {
//      float a = 25;
//     int b = 4;
//     int sum = a + b;
//     int sub = a - b;
//     int mul = a * b;
//     float div = a / b;
//     // int mod = a % b;
//     printf("Sum = %d\n", sum);
//     printf("Sub = %d\n", sub);
//     printf("Mul = %d\n", mul);
//     printf("Div = %f\n", div);
//     return 0;
//     // printf("Mod = %d\n", mod);
// }


int main()

{
    int a;
    scanf("%d", &a);
    if(a > 1000)
    {
        printf("You are rich\n");
    }
    else if(a < 1000 && a > 500)
    {
        printf("You are middle class\n");
    }
    else
    {
        printf("You are poor\n");
    }
    // printf("Mod = %d\n", mod);
}