//
// Created by Mahmoud Wael on 11/11/2025.
//

#ifndef UNTITLED2_STUDENT_H
#define UNTITLED2_STUDENT_H

class Student : public Person {
private:
    int yearLevel;
    string major;

public:
    Student();
    Student(int yl , string m);
    ~Student();
   void displayinfo();
    int getyearLevel() {
        return yearLevel;
    }
    string getmajor() {
        return major;
    }


};



#endif //UNTITLED2_STUDENT_H












#endif
