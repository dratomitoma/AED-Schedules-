//
// Created by tomas on 30/10/2022.
//
#ifndef CODIGO_UCTURMA_H
#define CODIGO_UCTURMA_H
#include <string>
#include <list>
#include "binarySearchTree.h"
#include "Slot.h"
#include "TurmaH.h"
using namespace std;



class UCTurma {
private:
    string codUC;
    string codTurma;
public:
    UCTurma() {NULL;};
    UCTurma(string codeUC, string codeTurma);

    void mudarTurma(string novaTurma);

    string getUC() const;
    string getTurma() const;

    bool operator<(const UCTurma& s2) const;
    bool operator>(const UCTurma& s2) const;
    bool operator==(const UCTurma& s2) const;
    bool operator!=(const UCTurma& s2) const;
};


#endif //CODIGO_UCTURMA_H
