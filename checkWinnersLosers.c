#include <stdio.h>

int checkWinnersLosers(int soldeA, int soldeB, int objectifA, int objectifB){
	if (soldeA > objectifA){
		printf("Joueur A vous avez depasse l'objectif que vous vous ete fixe");
	}
	else if (soldeB > objectifB){
		printf("Joueur B vous avez depasse l'objectif que vous vous ete fixe");
	}
	else if (soldeA == objectifA){
		printf("Bien joue Joueur A vous avez gagne");
	}
	else if (soldeB == objectifB){
		printf("Bien joue joueur B vous avez gagne");
	}
	return 0;
}