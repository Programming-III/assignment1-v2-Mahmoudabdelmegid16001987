//
// Created by Mahmoud Wael on 11/11/2025.
//

#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H
using namespace std;
#include <string>
class Person {
private:
    string name;
    int id;

public:
    Person();
    Person(string n , int idd);
    ~Person();

    void display();
    string getName() {
        return name;
    }

    int getId() {
        return id;
    }


};


#endif //UNTITLED2_PERSON_H
