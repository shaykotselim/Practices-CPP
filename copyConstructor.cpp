#include <iostream>;
#include <conio.h>;

using namespace std;

class Teacher {
public:
    string name;
    string subject;
    string department;

    double salary;
    //Create Parametrized
    Teacher (string name, string subject, string department, double salary){
        this -> name = name;
        this -> subject = subject;
        this -> department = department;
        this -> salary = salary;
    }
    // Copy constructor (Shallow Copy);

    void getInfo(){
        cout << "Name \t\t: " <<name <<endl;
        cout << "Subject \t: " <<subject <<endl;
        cout << "Department \t: " <<department <<endl;
        cout << "Salary \t: "<<salary <<endl;
    }
};
int main(){
    Teacher t1("Selim", "C++", "CSE", 2400);
    Teacher s1(t1);
    s1.getInfo();
    getch();
}
