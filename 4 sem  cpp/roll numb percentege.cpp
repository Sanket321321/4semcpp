Write a C++ program to read student information such as rollno, name and percentage of n
students. Write the student information using file handling.
*/




#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollno;
    string name;
    float percentage;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i+1 << ":" << endl;
        cout << "Roll No: ";
        cin >> s[i].rollno;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Percentage: ";
        cin >> s[i].percentage;
    }

    ofstream outfile("students.txt");

    if (!outfile) {
        cerr << "Error: Unable to create file!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        outfile << s[i].rollno << "," << s[i].name << "," << s[i].percentage << endl;
    }

    outfile.close();

    cout << "Student information has been written to the file students.txt" << endl;

    return 0;
}