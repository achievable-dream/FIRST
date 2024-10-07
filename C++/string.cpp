#include <iostream>

using namespace std;
int main()
{
    string name;

    cout<<"enter your name"<<endl;
    getline(std::cin,name);
    if(name.length()>12)
    {
        cout<<"invalid name";
    }
    else if(name.empty())
    {
        cout << "you did not type any thing";
    }
    else
    {
        cout<<"valid"<<endl;
        name.erase(0,3);
        cout<<"your name is "<< name;;
    }

}