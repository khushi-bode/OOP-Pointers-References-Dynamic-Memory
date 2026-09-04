// Program A: Pointers and References – Student Marks
#include <iostream>
#include <string>
using namespace std;

void updateUsingPointer(int *marks, int newMarks) {
    if (marks != nullptr) {
        *marks = newMarks; // Modify original variable through pointer
    }
}

void updateUsingReference(int &marks, int newMarks) {
    marks = newMarks; // Modify original variable through reference
}

int main() {
    string name;
    int marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter initial marks: ";
    cin >> marks;

    int *marksPtr = &marks;  // Pointer stores address of marks
    cout << "\nInitial marks: " << marks << endl;
    cout << "Address stored in pointer: " << marksPtr << endl;

    updateUsingPointer(marksPtr, 78);
    cout << "Marks after pointer update: " << marks << endl;

    int &marksRef = marks;   // Reference is an alias for marks
    updateUsingReference(marksRef, 85);
    cout << "Marks after reference update: " << marks << endl;

    cout << "\nStudent: " << name << endl;
    cout << "Final marks: " << marks << endl;

    return 0;
}
