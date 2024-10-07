#include <iostream>
#include <ctime>

using namespace std;
int main(void)
{
    srand(time(NULL));
    int ans=rand()%101;
    int guess;
    int upper=100;
    int lower=0;
    while(true)
    {
        cout << "guess a number between "<< lower << " and "<< upper <<endl;
        cin >> guess;
        if(guess >100 || guess <0)
        {
            continue;
        }
        if(guess==ans)
        {
            cout << "win!";
            break;
        }
        else if(guess< ans)
        {
            lower=guess;
        }
        else
        {
            upper=guess;
        }
    }
}