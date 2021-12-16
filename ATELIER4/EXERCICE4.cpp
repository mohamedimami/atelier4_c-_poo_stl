#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string>l1; 
    string n;
    int i;
    cout<<"inserez le nom, prenom et age de chaque personne sous forme de nom,prenom,age . tapez arreter quand vous terminez :"<<endl;
    for (i = 0;; i++) 
    {
    cin>>n;
    if(n=="arreter")
    {
        break;   
    }
    l1.push_back(n); 
    }
    list<string>::iterator it;  
    l1.sort();     
    it=l1.begin();
    cout<<"votre liste triee est : ";
    for (it;it!=l1.end();it++)  
    {
            cout<<*it<<"  ";
    }
}
