#include <iostream>;
#include <conio.h>;

using namespace std;
class Teacher {

public :
    Teacher(){
        cout << "University\t: " <<"Uttara University" <<endl;
    }

    string name ;
    string subject;
    string department;

    Teacher (string n, string sub, string dept) {
        name = n;
        subject = sub;
        department = dept;
    }
    void getInfo(){
        cout << "Name : \t\t: " <<name <<endl;
        cout << "Subject : \t: " <<subject <<endl;
        cout << "Department : \t: " <<department <<endl;
    }
};

int main (){
    Teacher ();
    Teacher t1("Wahid", "C++", "Computer Science");


    t1.getInfo();

    getch();
}
