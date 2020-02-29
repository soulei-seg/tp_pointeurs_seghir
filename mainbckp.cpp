#include <iostream>
#include <vector>
using namespace std;

//Fonction A
//swap pour échager le contenu de deux entier pointés
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


//Fonction B
//Renvoyer le plus petit et le plus grand entier d'un tableau
void higherSmaller(int array [], int size, int arg1, int arg2){
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


//Fonction C
//Insérer 5 nombres saisis dans un tableau
void insertNumbers(int array[]){
    int value;

    cout << "Saisir 5 nombres :" << endl;
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


int main(int argc, char *argv[]) {

    //Fonction A
    //Définir des variables et des pointeurs initialisés à l'adresse 0
    int var1 {1}, var2 {2}, *pointer_fa1 {0}, *pointer_fa2 {0};
	//Récupérer l'adresse de la variable et l'affecter au pointeur
	pointer_fa1 = &var1;
    pointer_fa2 = &var2;
	swap(*pointer_fa1, *pointer_fa2);

    //Fonction B
    //Définir des variables et des pointeurs initialisés à l'adresse 0
    int min, max, *pointer_fb1 {0}, *pointer_fb2 {0};
    //Récupérer l'adresse de la variable et l'affecter au pointeur
    pointer_fb1 = &min;
    pointer_fb2 = &max;
    //Initialiser un tableau vide
    int tableau [] = {};
    higherSmaller(tableau, 8, *pointer_fb1, *pointer_fb2);

    //Fonction C
    //Définir le tableau vide et un pointeur initialisé à l'adresse 0
    int tableau2[] = {}, *pointer_fc {0};
    pointer_fc = tableau2;
    insertNumbers(pointer_fc);
}