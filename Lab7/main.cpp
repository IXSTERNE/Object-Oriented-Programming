#include <iostream>
#include "course.hh"
#include "teacher.hh"
#include "student.hh"
#include <vector>
#include <string>

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
    return 0;
}
