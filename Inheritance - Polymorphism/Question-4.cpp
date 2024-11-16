//Write a C++ Program display Student Mark sheet using Multiple inheritance Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance) 

 #include <iostream>

using namespace std;

class Students {
public:
    int roll_no;

    Students(int roll_no) {
        this->roll_no = roll_no;
    }
};

class Test {
public:
    int subject1_marks;
    int subject2_marks;
    int subject3_marks;
    int subject4_marks;
    int subject5_marks;

    Test(int subject1_marks, int subject2_marks, int subject3_marks, int subject4_marks, int subject5_marks) {
        this->subject1_marks = subject1_marks;
        this->subject2_marks = subject2_marks;
        this->subject3_marks = subject3_marks;
        this->subject4_marks = subject4_marks;
        this->subject5_marks = subject5_marks;
    }
};

class Result : public Students, public Test {
public:
    int total_marks;

    Result(int roll_no, int subject1_marks, int subject2_marks, int subject3_marks, int subject4_marks, int subject5_marks) : Students(roll_no), Test(subject1_marks, subject2_marks, subject3_marks, subject4_marks, subject5_marks) {
        total_marks = subject1_marks + subject2_marks + subject3_marks + subject4_marks + subject5_marks;
    }

    void displayResult() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Subject 1 Marks: " << subject1_marks << endl;
        cout << "Subject 2 Marks: " << subject2_marks << endl;
        cout << "Subject 3 Marks: " << subject3_marks << endl;
        cout << "Subject 4 Marks: " << subject4_marks << endl;
        cout << "Subject 5 Marks: " << subject5_marks << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    int roll_no, subject1_marks, subject2_marks, subject3_marks, subject4_marks, subject5_marks;

    cout << "Enter Roll No: ";
    cin >> roll_no;

    cout << "Enter Marks for Subject {1} **BIOLOGY**: ";
    cin >> subject1_marks;

    cout << "Enter Marks for Subject {2} **METHS**: ";
    cin >> subject2_marks;

    cout << "Enter Marks for Subject {3} **ENGALISH**: ";
    cin >> subject3_marks;

    cout << "Enter Marks for Subject {4} **CHEMISTRY**: ";
    cin >> subject4_marks;

    cout << "Enter Marks for Subject {5} **PHYSICS**: ";
    cin >> subject5_marks;

    Result result(roll_no, subject1_marks, subject2_marks, subject3_marks, subject4_marks, subject5_marks);
    result.displayResult();

    return 0;
}