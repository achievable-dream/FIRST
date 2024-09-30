#include <stdio.h>
#include <cs50.h>
#include <string.h>

int arrays(int n);

int main(void)
{
    int number=get_int("terms: ");
    printf("%i\n",arrays(number));
}

int arrays(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return arrays(n-1)+arrays(n-2);
    }
}
