#include <iostream>
#include "course.hh"
#include "teacher.hh"
#include "student.hh"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int N = 70;

    Student mkut_stud[N];

    for(int i = 0; i < N; i++){
        mkut_stud[i] = Student(2000 + i, "Ner" + to_string(i), "Ovog" + to_string(i));
    }

    Teacher magsar("Magsarjav", "Bataa", "magsarjav@gmail.com");
    Teacher ggtulga("Gantulga", "Gombojav", "ggtulga@gmail.com");

    Course oop("OOP in C++", magsar, 30);
    Course ds("Data Structures", ggtulga, 20);

    for(int i = 0; i < N; i++){
        int c = rand() % 2;
        if(c == 0){
            oop.registerStudent(mkut_stud[i]);
        }
        if(c == 1){
            ds.registerStudent(mkut_stud[i]);
        }
    }  


    oop.print();
    ds.print();

    int oopExcess = oop.getCurrentCapacity() - oop.stud_num();
    while(oop.getKickCapacity() != oopExcess){
        for(int i = 0; i < oop.getCurrentCapacity(); i++){

            if(oop.getKickCapacity() != oopExcess){
                int c = rand() % 2;
                if(c == 1){
                    int flag = 0;
                    for(int j = 0; j < oop.getKickCapacity(); j++){

                        if(oop.getStudent(i).getId() == oop.getKickStudent(j).getId()){
                            flag = 1;
                            break;
                        } 
                    }
                    if(flag == 0){
                        oop.setKickList(oop.getStudent(i));
                    }        
                }
            }
        }
    }
        

    int dsExcess = ds.getCurrentCapacity() - ds.stud_num();
    while(ds.getKickCapacity() != dsExcess){
        for(int i = 0; i < ds.getCurrentCapacity(); i++){
            
            if(ds.getKickCapacity() != dsExcess){
                int c = rand() % 2;
                if(c == 1){
                    int flag = 0;
                    for(int j = 0; j < ds.getKickCapacity(); j++){
                        
                        if(ds.getStudent(i).getId() == ds.getKickStudent(j).getId()){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0){
                        ds.setKickList(ds.getStudent(i));
                    }
                }
            }
        }
    }
    
    oop.kickListPrint();
    ds.kickListPrint();

    vector<Student>& oop_studentList = oop.returnStudentList();
    vector<Student>& oop_kickList = oop.returnKickList();

    oop_studentList.erase(remove_if(oop_studentList.begin(), oop_studentList.end(),
    [&oop_kickList](const Student& student) {
        return find(oop_kickList.begin(), oop_kickList.end(), student) != oop_kickList.end();
    }), oop_studentList.end());

    vector<Student>& ds_studentList = ds.returnStudentList();
    vector<Student>& ds_kickList = ds.returnKickList();

    ds_studentList.erase(remove_if(ds_studentList.begin(), ds_studentList.end(),
    [&ds_kickList](const Student& student) {
        return find(ds_kickList.begin(), ds_kickList.end(), student) != ds_kickList.end();
    }), ds_studentList.end());

    oop.print();
    ds.print();

    return 0;
}