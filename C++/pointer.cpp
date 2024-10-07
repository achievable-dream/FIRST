#include <iostream>

int main(void)
{
    int a;
    if(!(std::cin >> a))
    {
        std::cout << "invalid input";
        std::cin.clear();
        std::cin.ignore(1000000,'\n');
    }
    a=a+1;
    
}