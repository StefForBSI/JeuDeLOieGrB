#include <egalite.h>
int condEqual(int soldeA, int soldeB, int dice) {
	if (soldeA == soldeB)
	{
		soldeB -= dice;
	}
	return soldeB;
}