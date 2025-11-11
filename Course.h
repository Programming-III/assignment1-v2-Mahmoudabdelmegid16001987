//
// Created by Mahmoud Wael on 11/11/2025.
//

#ifndef UNTITLED2_COURSE_H
#define UNTITLED2_COURSE_H

class Course : public Student{
private:
 string courseCode;
 string courseName;
 int maxStudents;
 Student* students;
 int currentStudents;

public:
    Course ();
    Course (string CC, string cN, int Ms, Student* s, int cs);
    ~Course();
  void addStudent(const Student& s);
    void displayCourseInfo();





};




#endif //UNTITLED2_COURSE_H














#endif
