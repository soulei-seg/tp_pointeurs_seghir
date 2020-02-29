#include <iostream>
#include <vector>
#include "swap.h"
#include "minmax.h"
#include "insertnum.h"
using namespace std;


int main(int argc, char *argv[]) {
    
    // Fonction A
    // Ecrire une fonction swap qui a comme paramètres deux pointeurs 
    // vers des entiers et qui échange le contenu des deux entiers pointés.

    int var1 {1}, var2 {2}, *pointer_fa1 {0}, *pointer_fa2 {0};

	pointer_fa1 = &var1;
    pointer_fa2 = &var2;

	swap(*pointer_fa1, *pointer_fa2);

    // Fonction B
    // Ecrire une fonction qui a comme paramètres un tableau d'entiers 
    // de taille quelconque, la taille du tableau, et 2 pointeurs vers 
    // des entiers min et max. La fonction doit renvoyer dans les entiers 
    // pointés par min et max respectivement les plus petits et les plus 
    // grands entiers du tableau. 

    int min, max, *pointer_fb1 {0}, *pointer_fb2 {0};

    pointer_fb1 = &min;
    pointer_fb2 = &max;
    int tableau [] = {};

    minmax(tableau, 8, *pointer_fb1, *pointer_fb2);

    // Fonction C
    // Ecrire une fonction qui prend en paramètre un pointeur vers un tableau, 
    // qui demande à l’utilisateurs de rentrer 5 nombres et qui remplis le tableau 
    // grâce au pointeur.

    int tableau2[] = {}, *pointer_fc {0};
    pointer_fc = tableau2;
    
    insertnum(pointer_fc);
}