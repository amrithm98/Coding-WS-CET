
#include<iostream>
using namespace std;

class Student
{
    private:
        int age;
        string name;
        string college;

    public:

        Student()
        {
            name = "Amrith";
        }

        Student(string name, int age, string college)
        {
            this->name = name;
            this->age = age;
            this->college = college;
        }

        void takeInput()
        {
            cin >> name >> college >> age;
        }
    
        void printData()
        {
            cout << "\nName : " << name << endl;
            cout << "\nAge : " << age << endl;
            cout << "\nCollege : " << college << endl;
        }
};

int main()
{
    // Student arr[3];
    // for(int i = 0; i < 3; i++)
    // {
    //     arr[i].takeInput();
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "\nStudent " << i+1 << endl;
    //     arr[i].printData();
    // }

    // Student student("Amrith",20,"CET");
    Student student;
    student.printData();

    return 0;
}