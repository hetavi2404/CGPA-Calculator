/*
A student’s cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator.
The user’s input is used to compute the CGPA, which includes information like the number of courses taken 
and the grades earned in each one. The program also shows each student’s overall course grade. 
CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results. 
The program can show the individual grades of each course, calculate total credits and total grade points 
achieved, determine the GPA for the semester, and based on all the data, it can generate and present the 
CGPA of the student. 

Technologies Required: C++ programming language, Data Structures, Basic Searching & Sorting algorithms, 
Basic Arithmetic Operations and formulas, and File Handling ( I/O Streams ).
*/

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

class Course{
    private:

    string course;
    int credits;
    float gradepoint;

    public:

    Course(string course, int credits, float marks){
        this->course = course;
        this->credits = credits;
        this->gradepoint = marksToGradePoint(marks);
    }

    float marksToGradePoint(float marks){
        if (marks >= 91.0f) return 10.0f;
        else if (marks >= 81.0f) return 9.0f;
        else if (marks >= 71.0f) return 8.0f;
        else if (marks >= 61.0f) return 7.0f;
        else if (marks >= 51.0f) return 6.0f;
        else if (marks >= 41.0f) return 5.0f;
        else if (marks >= 40.0f) return 4.0f;
        else return 0.0f;
    }

    string getCourseName() const {return course;}
    int getCredits() const {return credits;}
    float getGradePoint() const {return gradepoint;}

};

class Student{
    private:

    vector<Course> courses;
    vector<float> gpas;

    public:

    void addCourse(string name, int credits, float marks){
        courses.push_back(Course(name, credits, marks));
        cout << "Course added successfully!!"  << endl;
    }

    void viewCourses(){

        if(courses.empty()){
            cout << "No courses added yet!!" << endl;
            return;
        }

        cout << "-------------------------------------------------" << endl;
        cout << "   Course Name   |   Credits   |   Grade Point   " << endl;
        cout << "-------------------------------------------------" << endl;

        for (const auto &c : courses){
            cout << setw(17) << left << c.getCourseName()  << "|" << setw(13) << left << c.getCredits() << "|" << setw(18) << left << setprecision(2) << c.getGradePoint() << endl;
        }
        
    }

    void calculateGPA(){

        if (courses.empty()){
            cout << "No courses available to calculate GPA!" << endl;
            return;
        }

        float totalPoints = 0.0f;
        int totalCredits = 0;

        for (const auto& c : courses){
            totalPoints += c.getGradePoint() * c.getCredits();
            totalCredits += c.getCredits();
        }

        if (totalCredits == 0){
            cout << "Total credits are zero. Cannot calculate GPA." << endl;
            return;
        }

        float gpa = totalPoints / totalCredits;
        gpas.push_back(gpa);
        cout << "GPA for this semester: " << fixed << setprecision(2) << gpa << endl;

        cout << "Clear semester data? (y/n): ";
        char confirm;
        cin >> confirm;
        if(confirm == 'y') courses.clear();

    }

    void calculateCGPA(){

        if (gpas.empty()){
            cout << "No GPA records available. Please calculate at least one GPA first!" << endl;
            return;
        }

        float total = 0.0f;
        for (float g : gpas){
            total += g;
        }

        float cgpa = total / gpas.size();
        cout << "Cumulative CGPA: " << fixed << setprecision(2) << cgpa << endl;

    }

};

int main(){

    Student s;

    //main menu
    int ch;
    while(1){
        
        cout << "--------------------" << endl << "CGPA CALCULATOR" << endl << "--------------------" << endl;
        cout << "1. add course\n2. view courses\n3. calculate GPA\n4. calculate CGPA\n5. exit\nEnter your choice: ";
        cin >> ch;

        if(ch==1){

            string name;
            int credits;
            float marks;

            cout << "Enter course name: ";
            cin.ignore();
            getline(cin,name);

            cout << "Enter credits: ";
            cin >> credits;

            cout << "Enter marks scored: ";
            cin >> marks;

            s.addCourse(name, credits, marks);

        }

        else if(ch==2){
            s.viewCourses();
        }

        else if(ch==3){
            s.calculateGPA();
        }

        else if(ch==4){
            s.calculateCGPA();
        }

        else if(ch==5){
            cout << "Exiting..";
            return 0;
        }

        else cout << "Invalid choice!!" << endl;

    }
}