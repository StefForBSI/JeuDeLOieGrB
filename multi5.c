#include <multi5.h>

int condFive(int solde, int dice) {
    //solde multiple de 5 donc solde amputé de la valeur du dé
    if (solde % 5 == 0) {
        solde = solde - dice;// amputation valeur du dé
    }

    return solde;
}