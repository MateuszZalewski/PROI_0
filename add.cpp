/*
 * Name: add.cpp
 * Purpose: Dodawanie dwóch liczb
 * @author Mateusz Zalewski
 * @lab Wiktor Kuśmirek
 */
#include<iostream>
#include<limits>
using namespace std;
int main()
{
    double a,b;
    cout<<"Program zwraca sumę a+b"<<endl;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    if((a+b)<numeric_limits<double>::max()&&!cin.fail())
        cout<<a+b<<endl;
    else
    {
        cout<<"Błąd!"<<endl;
        exit(1);
    }
    return 0;
}
