#include <stdio.h>

void fizzbuzz(int i_number)
{
    if(i_number%3 == 0) {
        printf("fizz\n");
    }
    else {
        printf("%d\n",i_number);
    }
}
