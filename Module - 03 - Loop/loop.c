


// 5 - 6
// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
// Input
// Only one line containing a character X which will be a capital or small letter or digit.

// // Output
// // Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
// #include <stdio.h>

// int main() 

// {
//     char ch ;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z') 
//     {
//         printf("ALPHA\nIS SMALL");
//     } 
//     if (ch >= 'A' && ch <= 'Z') 
//     {
//         printf("ALPHA\nIS CAPITAL");
//     }  
//     if (ch >= '0' && ch <= '9') 
//     {
//         printf("IS DIGIT");
//     } 
//     return 0;
// }


//  5 - 7
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// #include <stdio.h>

// int main() 

// {
//     int A = 0, B = 0, C = 0;
//     scanf("%d", &A);
//     scanf("%d", &B);
//     scanf("%d", &C);

//     // minimum number
//     if (A <= B && A <= C  )
//     {
//         printf("%d ", A);
//     }
//     else if (B <= A && B <= C)
//     {
//         printf("%d ", B);
//     }
//     else if (C <= A && C <= B)
//     {
//         printf("%d ", C);
//     }


//     if (A >= B && A >= C  )
//     {
//         printf("%d", A);
//     }
//     else if (B >= A && B >= C)
//     {
//         printf("%d", B);
//     }
//     else if (C >= A && C >= B)
//     {
//         printf("%d", C);
//     }
//     return 0;
// }



// Extra Practice Problem

// #include <stdio.h>

// int main() 

// {
//     int long long X = 0, Y = 0;
//     scanf("%lld", &X);
//     scanf("%lld", &Y);

//   printf("%lld + %lld = %lld\n", X, Y, X + Y); 
//   printf("%lld * %lld = %lld\n",X, Y, X * Y); 
//   printf("%lld - %lld = %lld", X, Y, X - Y); 
//     return 0;
// }


// extra problem 2
// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

// Input
// Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

// Output
// Print "Difference  =  " without quotes followed by the equation result.


#include <stdio.h>

int main() 

{
     long long A = 0, B = 0 , C = 0, D = 0;
    scanf("%lld", &A);
    scanf("%lld", &B);
    scanf("%lld", &C);
    scanf("%lld", &D);
    long long X = (A * B) - (C * D);
    printf("Difference = %lld", X);

    return 0;
}
