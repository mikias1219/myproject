#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Constructor to initialize the object
    Student(string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    // Function to set the student's name
    void setName(string newName)
    {
        name = newName;
    }

    // Function to get the student's name
    string getName()
    {
        return name;
    }
};

int main()
{
    // Creating a Student object with name "John" and age 20
    Student student1("John", 20);

    // Outputting the student's name
    cout << "Student's name: " << student1.getName() << endl;

    // Changing the student's name
    student1.setName("Alice");

    // Outputting the updated student's name
    cout << "Updated student's name: " << student1.getName() << endl;

    return 0;
}
