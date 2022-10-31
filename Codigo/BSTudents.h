//
// Created by Tiago Cruz on 30/10/2022.
//

#ifndef MAIN_CPP_BSTUDENTS_H
#define MAIN_CPP_BSTUDENTS_H
#include "student.h"
#include "binarySearchTree.h"

class BSTudents{
private:
    BST<Student>students = BST<Student>(Student());
public:
    BSTudents() {NULL;};
    void insertStudents();
    void insertSchedule();

    string getStudentName(int id) const;
    BST<UCTurma> getStudentUCTurma(int id) const;
    string getStudentUCs(int id) const;
    string getStudentUCTs(int id) const;

    void showStudentUCs(int id);
    void showStudentClasses(int id);
    void showStudentUCTurma(int id);
    void showStudentHorario(int id, BST<TurmaH> h);

    void showAllStudentCodes();
    void showAllStudentNames();
    void showAllUC();
    void showAllClasses();
    void showAllStudents();
};

#endif //MAIN_CPP_BSTUDENTS_H