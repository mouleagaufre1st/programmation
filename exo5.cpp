#include<iostream>
using namespace std;
int main()
{
    int a, b, o;

    cout<<"saisir la valeur a\n";
    cin>>a;
    cout<<"saisir la valeur b\n";
    cin>>b;
    cout <<" choisissez un operateur\n";
    cout << "1 : -\n";
    cout << "2 : +\n";
    cout << "3 : *\n";
    cout << "4 : /\n";
    cin >> o;

    if (o == 1)
    {
        o = a - b;
        cout<< "o = "<< o;
    }
    else{
        if (o == 2)
        {
            o = a + b;
            cout<< "o = "<< o;
        }
        else{
           if (o == 3)
           {
               o = a * b;
               cout<< "o = "<< o;
           }
           else{
               if (o == 4 ){

                   if (b != 0){
                       o = a / b;
                      cout << "o = "<< o;
                   
               }

               else{
                   cout << "erreur syntaxe";
                   o = a / b;
                   cout << "o = "<< o;
               }

               }
               
           }
            }
        }

    }