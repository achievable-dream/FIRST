#include <iostream>
using namespace std;
double get_total(double array[],int length);
int main(void){
    double prices[]={48.99,15.05,5,9.99};
    int size=sizeof(prices)/sizeof(prices[0]);
    double total=get_total(prices,size);
    cout << total;

}
double get_total(double array[],int length)
{
    double total;
    for (int i=0;i<length;i++)
    {
        total+=array[i];
    }
    return total;
}
