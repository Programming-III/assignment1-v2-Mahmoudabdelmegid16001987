#include <iostream>
#include"Person.h"
#include"Student.h"
#include"Course.h"

Person :: Person() {

}
Person ::Person(string n , int idd) {
    name = n;
    id = idd;
}
~Person() {

}
void Person :: display() {
    cout << "Person Name :" << getName() << endl;
    cout << "Person Id :" << getId() << endl;
}

Student()
{
}
~Student ()
{
   delete [] students;
}
void Student :: displayinfo(): display()
{
    cout << " Student yearLevel :" << getyearLevel() << endl;
    cout << " Student major : " << getmajor() << endl;
}



 void Course :: addStudent(const Student& s) {
    Student* newStudents = new Student[currentStudents ++];
for (int i =0; i<currentStudents;i++) {
    newStudents[i]= students[i];
}
    currentStudents++;
    students = newStudents;
    delete [] newStudents;




}

Course()
{
}
~Course()
{
}

void Course :: displayCourseInfo() {
    
}

int main() {

}
    return 0;
