#include <multi5.h>

int condFive(int solde, int dice) {
    //solde multiple de 5 donc solde amput� de la valeur du d�
    if (solde % 5 == 0) {
        solde = solde - dice;// amputation valeur du d�
    }

    return solde;
}