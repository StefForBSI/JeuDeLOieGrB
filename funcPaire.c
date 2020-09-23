#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <funcPaire.h>

int funcMain(solde, dice) {

	int solde, Int dice;

	if (solde %2 == 0)
	{
		solde += dice;
		return solde;
	}
	else
	{
		return solde;
	}
}