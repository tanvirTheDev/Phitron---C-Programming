#include <stdio.h>

// int main(){

//     int x= 0;
//     printf("%p", &x);

//     return 0;
// }


// store pointer value

int sum(){

}
// pointe dereference
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p", &x);
    
    int *ptr;
    ptr = &x;
    printf("%p", *ptr);
    return 0;
}
