#include <iostream>
#include "minmax.h"
using namespace std;

//Fonction B
//Renvoyer le plus petit et le plus grand entier d'un tableau
void minmax(int array [], int size, int arg1, int arg2){
    cout << "Valeurs du tableau : " << endl;
    //Remplir le tableau par des nombres aléatoires
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101;
        cout << array[i] << endl;
        if(array[i] <= arg1)
        {
            arg1 = array[i];
        }else if (array[i] >= arg2)
        {
            arg2 = array[i];
        }
    }
    cout << "Le plus petit entier du tableau est " << arg1 << "." << endl;
    cout << "Le plus grand entier du tableau est " << arg2 << "." << endl;
}