//
// Created by tomas e João e Tiago on 15/10/2022.
//

#include <string>
#include <vector>
#include <map>
using namespace std;
#ifndef CODIGO_STUDENT_H
#define CODIGO_STUDENT_H


class Student{
private:
    int StudentCode;
    string StudentName;
    map<string,string> Courses;  //(UcCode,ClassCode)
public:
    Student();
    Student(int StudentCode, string StudentName, map<string,string> Courses);
    int getstudentCode();
    string getStudentName();
    map<string,string> getCourses();
    vector<string> getUcCode();
    string getClassCode(string UcCode);
    void setClasses(map<string,string> Courses);
    void setUcCode_ClassCode(vector<string> UcCode,vector<string> ClassCode);
    void setIndividual_UcCode_ClassCode(string sUcCode,string eUcCode,string ClassCode);
    void setIndividual_ClassCode(string UcCode,string ClassCode);
    bool operator<(const Student& s2) const;
    bool operator>(const Student& s2) const;
    bool operator==(const Student& s2) const;
    bool operator!=(const Student& s2) const;
};


#endif //CODIGO_STUDENT_H
