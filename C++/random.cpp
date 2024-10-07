#include <iostream>
#include <ctime>

using namespace std;
int main(void)
{
    srand(time(NULL));
    int a=rand();
    int b=rand();
    int c=rand();
    cout << a << endl << b << endl << c;
}