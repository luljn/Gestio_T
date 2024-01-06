#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>



int main() {
	
	int choix; // choix dans le Menu principal.
	int choix1; // choix dans le Menu de Lancement des processus.
	int choix2; // choix dans le Menu d'arrêt des processus.
	
	system("title Gestio T "); // Pour définir le titre de la fenêtre en "Gestio T".
	system("color 09");
	system("cls");
	Menu();
	AfficherMenu();
	printf("\n\n\t\t\tQue voulez-vous faire ? : ");
	scanf("%d", &choix);
	
	switch(choix){
		
		case 1 :
			
			MenuLancer();
			printf("\n\t\t\tQuelle app voulez-vous lancer ? : ");
			scanf("%d", &choix1);
			
			
			switch(choix1){
				
				case 1 :
					
					system("start cmd");
					main();
					break;
				
				case 2 :
					
					system("start explorer");
					main();
					break;
					
				case 3 :
					
					system("start wmplayer");
					main();
					break;
					
				case 4 :
					
					system("start mspaint");
					main();
					break;
					
				case 5 :
					
					system("start notepad");
					main();
					break;
					
				case 6 :
					
					system("start charmap");
					main();
					break;
					
				default :
					
					system("cls");
					printf("\n\n\t\t\tChoix non disponible :( !");
					printf("\n\n\t\t\t");
					system("pause");
					main();
					break; 
			}
			
			break;
			
		case 2 :
			
			//system("taskmgr");  Instruction qui utilise la  commande "taskmgr" pour ouvrir le gestionnaire de tâches.
			system("cls");
			printf("\nVoici la liste des processus en cours : \n\n");
			system("tasklist");
			printf("\n\n\t\t"); 
			system("pause");
			main();
			break;
			
		case 3 : 
		
			MenuArreter();
			printf("\n\t\t\tQuelle app voulez-vous arreter ? : ");
			scanf("%d", &choix2);

			switch(choix2){
				
				case 1 :
					
					system("taskkill /IM cmd.exe");
					main();
					break;
				
				case 2 :
					
					system("taskkill /IM explorer.exe");
					main();
					break;
					
				case 3 :
					
					system("taskkill /IM wmplayer.exe");
					main();
					break;
					
				case 4 :
					
					system("taskkill /IM mspaint.exe");
					main();
					break;
					
				case 5 :
					
					system("taskkill /IM notepad.exe");
					main();
					break;
					
				case 6 :
					
					system("taskkill /IM charmap.exe");
					main();
					break;
					
				default :
					
					system("cls");
					printf("\n\n\t\t\tChoix non disponible :( !");
					printf("\n\n\t\t\t");
					system("pause");
					main();
					break; 
			}
		
			break;
			
		case 4 : 
		
			Notes();
			break;
			
		case 5 :
			
			system("cls");
		//	system("exit");
			printf("\n\n\n\t\t\tAu Revoir :) !\n\n\n");
			exit(EXIT_SUCCESS); // Pour quittter le programme. On peut aussi utiliser : system("exit") et return 0.
		//	return 0;
			break;
		
		default : 
		
			system("cls");
			printf("\n\n\t\t\tChoix non disponible :( !");
			printf("\n\n\t\t\t");
			system("pause");
			main();
			break;
	}
	
	return 0;
}


                                                                                                                  // By Lula Jonathan UCAC-ICAM X2026.
