#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void date(const string& ch)
{
    if ( ch.length() != 12 )
        cerr << "Chaine invalide, entrez 12 caracteres " << endl;
    else
    {
        cout << "Date  : " << ch.substr(0,2) << "/" << ch.substr(2,2) << "/" << ch.substr(4,4) << endl;
        cout << "Heure : " << ch.substr(8,2) << "h" << ch.substr(10,2) << endl;
    }
}

int main()
{

    string ch ;
    cout << "Entrer la forme JJMMAAAAHHNN :" << endl ;
    cin >> ch; 
    date(ch);
}
