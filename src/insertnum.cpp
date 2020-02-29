#include <iostream>
#include "insertnum.h"
using namespace std;

//Fonction C
//remplir le tableau grâce au pointeur
void insertnum(int array[]){
    int value;

    wcout << "Saisir 5 nombres a inserer dans le tableau :" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> value;
        array[i] = value;
    }
    cout << "Voici les valeurs contenues dans le tableau : " << endl;
    for (int i = 0; i < 5; i ++){
        cout << array[i] << endl;
    }
}