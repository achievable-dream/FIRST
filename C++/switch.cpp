#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
int main(void)
{
    srand(time(NULL));
    int a=(rand()%4)+1;
    switch(a)
    {
        case 1:
            cout << "rainy";
            break;
        
        case 2:
            cout << "sunny";
            break;
        case 3:
            cout << "cloudy";
            break;
        default:
            cout << "nothing happen";
            cout << fixed << std::setprecision(2) << 120;
    }
}