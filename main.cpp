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

Student ::Student()
{
}
Student :: ~Student ()
{
   
}
Student :: Student(int yl , string m)
{
yearLevel = yl;
major = m;
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
Course :: Course (string CC, string cN, int Ms, Student* s, int cs)
{
courseCode = cc;
CourseName = cN;
maxStudents = Ms;
s = new Student[cs];
    currentStudents = cs;
Course :: Course()
{
}
Course :: ~Course()
{
    delete [] students;
}


void Course :: displayCourseInfo(): displayinfo() {
    cout << " Course Name : " << courseName << endl
}

int main() {
Person p("Mahmoud" , 16001987);
    Student s( 2 , "Cs");
    Instructor I("Computer Science " , 5);
    

    return 0;




}
