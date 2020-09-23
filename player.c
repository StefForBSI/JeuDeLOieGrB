#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>

//fonction playerSaisie

int player()
{
	int max1 = 0, max2 = 0;

	do {

		printf("Le premier joueur choisi un nombre entre 50 et 100\n");
		scanf("%d", &max1);
		if (max1 < 50 || max1 > 100)printf("Non compris entre 50 et 100\n");

	} while (max1 < 50 || max1 > 100);

	do {

		printf("Le deuxieme joueur choisi un nombre entre 50 et 100\n");
		scanf("%d", &max2);
		if (max2 < 50 || max2 > 100)printf("Non compris entre 50 et 100\n");

	} while (max2 < 50 || max2 > 100);

	printf("\n");
}

