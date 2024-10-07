#include <iostream>

using namespace std;

int main(void)
{
    string array[11]={};
    fill(array,array+8,"pizza");
    cout << array[10].empty() << endl;
}