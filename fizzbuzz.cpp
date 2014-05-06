#include <stdio.h>

void FizzBuzz(int nNumber)
{
    char cFizzStr[] = "fizz";
    
    if(nNumber%3 == 0) {
        printf("%s\n", cFizzStr);
    }
    else {
        printf("%d\n", nNumber);
    }
}
