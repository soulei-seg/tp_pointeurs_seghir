#include <iostream>
#include "swap.h"
using namespace std;

//Fonction A
//swap pour échager le contenu de deux entiers pointés
void swap(int arg1, int arg2)
{
    cout << "Avant le swap :" << endl;
    cout << "> var1 vaut : " << arg1 << endl << "> var2 vaut : " << arg2 << endl << endl;

    int cache {arg1};
    arg1 = arg2;
    arg2 = cache;

    cout << "Apres le swap :" << endl;
    cout << "> var1 vaut : " << arg1 << endl << "> var2 vaut : " << arg2 << endl << endl;
}