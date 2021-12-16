#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1;
    int j; 
    int i;
    cout<<"inserez les elements de la liste a trier "<<endl;
    cout<<"tapez 0 pour arreter"<<endl;
    for (i = 0;; i++)  
    {
    cin>>j;

    if(j==0)
    {
        break;  
    }
    l1.push_back(j); 
    }
    list<int>::iterator it;  
    l1.sort();    
    it=l1.begin();
    cout<<"la liste triee est : ";
    for (it; it!=l1.end(); it++)  
    {
            cout<<*it<<"  ";
    }
}
