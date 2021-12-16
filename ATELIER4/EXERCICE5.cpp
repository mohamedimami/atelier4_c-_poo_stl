#include <iostream>
#include <set>
#include <vector>
#include <list>

using namespace std;

bool doesExistInSet(set <int> setToTest,int target){
    int temp = setToTest.count(target);
    if (temp==1)
    {
        return true;
    }
    
    return false;
}

bool anotherDoesExistInSet
    (set <int>::iterator begin,set <int>::iterator end,int target)
{
    for(set <int>::iterator setIterator = begin; setIterator!=end;setIterator++){
        if(*setIterator == target){
            return true;
        }
    }
    return false;
}

template <typename Iterable,typename Target,typename Iterator,typename Begin,typename End> 
bool isInField(Iterable field,Iterator iterator,Target target,Begin begin,End end){
     for(
         iterator = begin;
         iterator != end;
         iterator++
         ){
        if(*iterator == target){
            return true;
        }
    }
    return false;
}

int main()
{
    set <int> mySet;
    set <int>::iterator setIterator;
    int target;

    for(int i = 1;i <= 100; i++){
        mySet.insert(i);
    }

    cout << "entrer une valeur pour la chercher dans le set\n";
    cin >> target;
    if(doesExistInSet(mySet,target)){
        cout << "l'entier " << target << " existe dans le set.\n";
    }else{
        cout << "l'entier " << target << " n'existe pas dans le set.\n";
    }

    cout << "Utilisation d'une autre methode\n";
     if(anotherDoesExistInSet(mySet.begin(),mySet.end(),target)){
        cout << "l'entier " << target << " existe dans le set.\n";
    }else{
        cout << "l'entier " << target << " n'existe pas dans le set.\n";
    }
    cout << "Utilisation d'une template methode\n";
     if(isInField(mySet,setIterator,target,mySet.begin(),mySet.end())){
        cout << "l'entier " << target << " existe dans le set.\n";
    }else{
        cout << "l'entier " << target << " n'existe pas dans le set.\n";
    }
    
    cout << "Utilisation d'une template methode avec un vecteur de string\n";
    vector <string> myVector = {"mohamed","imami"} ;
    vector <string>::iterator vectorIterator;
    if(isInField(myVector,vectorIterator,"omar",myVector.begin(),myVector.end())){
    cout << "la valeur " << "mohamed" << " existe dans le vecteur.\n";
    }else{
        cout << "la valeur " << "mohamed" << " n'existe pas dans le vecteur.\n";
    }

    cout << "Utilisation d'une template methode avec un liste d'entiers\n";
    list <int> myList;
    list <int>::iterator listIterator;
    for(int i = 1;i <= 100; i++){
        myList.push_back(i);
    }
    if(isInField(myList,listIterator,target,myList.begin(),myList.end())){
    cout << "l'entier " << target << " existe dans la liste.\n";
    }else{
        cout << "l'entier " << target << " n'existe pas dans la liste.\n";
    }

    cout << "Utilisation d'une template methode avec un tableau de floats\n";
    float classicTable[100];
    float* classicTableIterator = classicTable;
    for(int i = 1;i <= 100;i++){
        classicTable[i-1] = i;
    }
    if(isInField(classicTable,classicTableIterator,target,&classicTable[0],&classicTable[100])){
    cout << "la valeur " << target << " existe dans la table des floats.\n";
    }else{
        cout << "la valeur " << target << " n'existe pas dans la table des floats.\n";
    }
    
    return 0;
}
