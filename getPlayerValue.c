#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>

//fonction getPlayerValue

int getPlayerValue()
{
	int max = 0;

	do {

		printf("Le joueur choisi un nombre entre 50 et 100\n");
		scanf("%d", &max);
		if (max < 50 || max > 100)printf("Non compris entre 50 et 100\n");

	} while (max < 50 || max > 100);
	printf("\n");

	return max;
}

