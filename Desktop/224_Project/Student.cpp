//
// Created by Jane on 12/06/17.
//

#include "Student.h"

Student::Student(){
    setasTeacher();
    setMax_books(5);
    setMax_days(30);
}

Student::Student(string username, string password){
    this -> username = username;
    this -> password = password;
    setasStudent();
    setMax_books(5);
    setMax_days(30);

}



