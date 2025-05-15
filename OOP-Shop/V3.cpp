/*
Nom : Nasir
Pr�nom : Amun
Classe : 3An
Groupe : S
Exercice : 0
S�ance : FINAL EXAM 
Version : V3
Date : 08 / 04 / 2024

*/

#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#include"article.h"
# include "clothing.h"
# include "goodies.h"
# include "T_shirt.h"
# include "Sweatshirt.h"
# include "souvenir.h"





main(){
    int choice;
    souvenir s;
    do{
        system("cls");
        choice=menu();
        if (choice==1){
            s.add();
            system("pause");
            system("cls");
        }
        if (choice==2){
            system("cls");
            s.supress();
            system("pause");
            system("cls");
        }
        if (choice==3){
            system("cls");
            s.display();
            system("pause");
            system("cls");
        }
        if (choice==4){
            system("cls");
            s.nb_souvenir();
            system("pause");
            system("cls");
        }
    }while(choice!=5);

}