#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <funcPaire.h>

int funcMain(soldeJoueur, lanceDe) {

	int soldeJoueur1, Int lanceDe;

	if (soldeJoueur %2 == 0)
	{
		soldeJoueur += lanceDe;
		return soldeJoueur;
	}
	else
	{
		return soldeJoueur;
	}
}