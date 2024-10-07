#include <iostream>


char get_user();
char get_computer();
void show(char choice);
bool end(char choise1,char choise2);

using namespace std;

int main(void)
{
    char user=get_user();
    char computer=get_computer();
    cout << "your choise is ";
    show(user);
    cout << "computer choise is ";
    show(computer);

    return 0;
}
char get_user()
{
    while(true)
    {
        char choise;
        cout << "paper,scissors or rock";
        cout <<"*****************************";
        cin >> choise;
        if (tolower(choise)=='r' || tolower(choise)=='s' || tolower(choise)=='p')
        {
            return choise;
            break;
        }

    }
}
char get_computer()
{
    char choise;
    int random=rand()%3;
    srand(time(0));
    switch(random)
    {
        case 0:
        choise='r';
        break;
        case 1:
        choise = 's';
        break;
        case 2:
        choise = 'p';
        break;
    }
    return choise;
}
void show(char choise)
{
    switch (choise)
    {
        case 'r':
        cout << "rock"<<endl;
        break;
        case 'p':
        cout << "paper"<<endl;
        break;
        case 's':
        cout << "scissors"<<endl;
        break;
    }
}