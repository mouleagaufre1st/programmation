#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"saisir une valeur a : \n";
    cin>> a;
    cout<<"saisir une valeur b : \n";
    cin>> b;
    cout<<"saisir une valeur c : \n";
    cin>> c;
    if (c>=a)
    {
        d = a;
        a = c;
        c = d;
    }
        else
        if (b>=a)
        {
            d = a;
            a = b;
            b = d;
        }
        else 
            a = a;
    if (c>=b)
    {
        d = b;
        b = c;
        c = d;
    }
    else
        b = b;
        c = c;
    cout<<"valeur a : \n"<<a;
    cout<<" valeur b : \n"<<b;
    cout<<" valeur c : \n"<<c;
    

}