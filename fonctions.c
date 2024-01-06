#include<stdio.h>
#include<stdlib.h>
#include"fonctions.h"



void Menu(){
	
	printf("\n\n");
    printf("\t\t\t\t    /|    //||                            \n");
    printf("\t\t\t\t   //|   // ||     ___       __           \n");
    printf("\t\t\t\t  // |  //  ||   //___))  //   )) //   // \n");
    printf("\t\t\t\t //  | //   ||  //       //   // //   //  \n");
    printf("\t\t\t\t//   |//    || ((____   //   // ((___((   \n");
}



void AfficherMenu(){
	
	printf("\n\n");
	printf("\n\n\t\t\t1 - Lancer une application.\n\n");
	printf("\t\t\t2 - Voir les processus en cours.\n\n");
	printf("\t\t\t3 - Arreter un Processus.\n\n");
	printf("\t\t\t4 - Notes.\n\n");
	printf("\t\t\t5 - Quitter.\n\n");
}



void Notes(){
	
	system("cls");
	printf("\n\n\t\tNOTES :\n");
	printf("\t\t~~~~~\n");
	printf("\n\n\t\t\tCe programme permet de lancer des applications,\n");
	printf("\t\t\tDe voir les processus en cours d'execution,\n");
	printf("\t\t\tEt d'arreter des processus.\n\n\n");
	printf("\t\t\t");
	system("pause");
	main();	
}



void MenuLancer(){
	
	system("cls");
	printf("\n\n\t\tLancer une application :\n");
	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n\n\t\t\t1 - Invite de commandes.\n\n");
	printf("\t\t\t2 - Explorateur de fichiers.\n\n");
	printf("\t\t\t3 - Windows Media player.\n\n");
	printf("\t\t\t4 - Paint.\n\n");
	printf("\t\t\t5 - Bloc-notes.\n\n");
	printf("\t\t\t6 - Table de caracteres.\n\n");
}



void MenuArreter(){
	
	system("cls");
	printf("\n\n\t\tArreter un processus :\n");
	printf("\t\t~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n\n\t\t\t1 - Invite de commandes.\n\n");
	printf("\t\t\t2 - Explorateur de fichiers.\n\n");
	printf("\t\t\t3 - Windows Media player.\n\n");
	printf("\t\t\t4 - Paint.\n\n");
	printf("\t\t\t5 - Bloc-notes.\n\n");
	printf("\t\t\t6 - Table de caracteres.\n\n");
}
