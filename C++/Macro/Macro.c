#include <stdio.h>

// macro
#define SQR(X) X*X

int main(void)
{
    int result;
    int x = 5;
    printf("%d\n",SQR(10));
    printf("%d\n",SQR(x));
    printf("%d\n",SQR(x+3));

    return 0;
}