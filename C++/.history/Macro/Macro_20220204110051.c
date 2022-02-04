#include <stdio.h>

// macro
#define SQR(X) X*X;

int main(void)
{
    int result;
    int x = 5;
    pusts(SQR(10));
    puts(SQR(x));
    puts(SQR(x+3));
    return 0;
}