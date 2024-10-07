#include <iostream>

/// @brief 
/// @return 
using namespace std;
int main(){
    int grade;
    cout << "please enter your grade";
    cin >> grade;
    grade>50? cout << "you are qualified" : cout << "you are not";
    return 0;
}