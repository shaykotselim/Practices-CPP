#include <iostream>;
#include <conio.h>;

using namespace std;

class Person {
public:
    string name;
    string id ;

    Person (string name, string id){
        this -> name = name;
        this -> id = id ;
    }

    Person (){

    }
   // void getInfo(){
   //     cout << "Name \t : " << name <<endl;
   //     cout << "ID \t : " << id << endl;
   //  }
};
class Student : public Person {
public :
    int age;

    Student (string name, string id , int age ): Person(name, id){
        this -> name = name;
        this -> id = id ;
        this -> age = age;
    }

    void getInfo(){
        cout << "Name \t : " << name << endl;
        cout << "ID \t : " << id <<endl;
        cout << "Age \t : " << age <<endl;
    }
};

int main (){

    Student s1("Shaykot hossain selim", "333,33", 22);
    s1.getInfo();

    getch();
}
