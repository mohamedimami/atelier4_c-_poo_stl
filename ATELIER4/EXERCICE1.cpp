#include <iostream>
using namespace std;

class Complexe
{
public:
    float reel;
    float imaginaire;
    void setValue(float re,float im);
    Complexe operator+(Complexe);
    Complexe operator-(Complexe);
    Complexe operator*(Complexe);
    Complexe operator/(Complexe);
};

void Complexe::setValue(float re,float im)
{
    reel = re;
    imaginaire = im;
}

Complexe Complexe::operator+(Complexe deuxieme){
    Complexe resultat;
    resultat.imaginaire = this->imaginaire + deuxieme.imaginaire;
    resultat.reel = this->reel + deuxieme.reel;
    return resultat;
}

Complexe Complexe::operator-(Complexe deuxieme){
    Complexe resultat;
    resultat.imaginaire = this->imaginaire - deuxieme.imaginaire;
    resultat.reel = this->reel - deuxieme.reel;
    return resultat;
}

Complexe Complexe::operator*(Complexe deuxieme){
    Complexe resultat;
    resultat.reel = this->reel * deuxieme.reel - this->imaginaire * deuxieme.imaginaire;
    resultat.imaginaire = this->reel * deuxieme.imaginaire + this->imaginaire * deuxieme.reel;
    return resultat;
}


Complexe Complexe::operator/(Complexe deuxieme){
    Complexe resultat;
       resultat.reel = (this->reel * deuxieme.reel + this->imaginaire * deuxieme.imaginaire) /
                (deuxieme.reel * deuxieme.reel + deuxieme.imaginaire * deuxieme.imaginaire);
        resultat.imaginaire = (this->imaginaire * deuxieme.reel - this->reel * deuxieme.imaginaire) /
                (deuxieme.reel * deuxieme.reel + deuxieme.imaginaire * deuxieme.imaginaire);
    return resultat;
}
     



Complexe operations(Complexe premier,Complexe deuxieme){
    Complexe resultat; 
    float tempRe,tempIm;
    char operation ;
    cout << "Operation: \n";
    cout << "1: Somme\n";
    cout << "2: Soustration\n";
    cout << "3: Multiplication\n";
    cout << "4: Division\n";
    cin >> operation;

    switch (operation)
    {
    case '1':
        resultat = premier + deuxieme;
        break;
     case '2':
        resultat = premier - deuxieme;
        break;
     case '3':
        resultat = premier * deuxieme;        
        break;
     case '4':
        resultat = premier / deuxieme;
        break;
    }

    
}

int main()
{
    float partie_re,partie_im;

    Complexe z1,z2;
    cout << "Pour le premier complexe :"<< endl;
    cout << "entrez la partie reele: " << endl;
    cin >> partie_re;
    cout << "entrez la partie imaginaire: " << endl;
    cin >> partie_im;
    z1.setValue(partie_re,partie_im);
    
    cout << "Pour le deuxieme complexe :"<< endl;
    cout << "entrez la partie reel: " << endl;
    cin >> partie_re;
    cout << "entrez la partie imaginaire: " << endl;
    cin >> partie_im;
    z2.setValue(partie_re,partie_im);

    cout << "le premier complexe: " << z1.reel << " + " << z1.imaginaire << "i \n";
    cout << "le deuxieme complexe: " << z2.reel << " + " << z2.imaginaire << "i \n";
    Complexe resultat = operations(z1,z2);

    cout << "la resultat est: " << resultat.reel << " + " << resultat.imaginaire << "i \n";

    return 0;
}
