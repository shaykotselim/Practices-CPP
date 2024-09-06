#include <iostream>;
#include <conio.h>;

using namespace std;

class Teacher {
private:
    double salary;
public:
    string name;
    string subject;
    string dept;

    void changeDept (string newDept){
            dept = newDept;
    }
    void setSalary (double sal){
        salary = salary + sal;
    }
    double getSalary (){
        return salary;
    }

};

int main (){
    Teacher t1;
    t1.name = "Wahid sir";
    t1.subject = "C++";
    t1.dept = "Computer Science & Engineering";

    t1.setSalary(234);


    cout << t1.name <<endl;
    cout << t1.subject <<endl;
    cout << t1.dept <<endl;
    cout << t1.getSalary();


    getch();
}
