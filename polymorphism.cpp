#include <iostream>;
#include <conio.h>;

using namespace std;
class Student {
public:
    string name;
    Student(){
        cout << "This is Non - Parameterized" <<endl;
    }
    Student(string name){
        this -> name = name;
        cout << "This is parametrized " <<endl;
    }
};
int main (){
    Student s1;
    Student s2("selim");

    getch();
}
