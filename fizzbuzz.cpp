#include <stdio.h>

void FizzBuzz(int nNumber)
{
    char cFizzStr[] = "fizz";
    char BuzzStr[] = "buzz";
    
    if(nNumber%3 == 0) {
        printf("%s\n", cFizzStr);
    }
    else if(nNumber%5 == 0)
    {
	    printf("%s\n",BuzzStr);
    }
    else {
        printf("%d\n", nNumber);
    }
}
