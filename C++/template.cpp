#include <iostream>
using namespace std;
template <typename T,typename U>

auto max(T a,U b)
{
    return (a>b)? a : b;
}
int main(void)
{
    std::cout << max(1.2,2.29139);
}