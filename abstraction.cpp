#include <iostream>;
#include <conio.h>;

using namespace std;
class Shape {
    virtual void draw() = 0; // pure virtual function;
};

class Circle: public Shape {
public :
    void draw(){
        cout << "Drawing a circle \n";
    }
};

int main (){

        Circle c1;
        c1.draw();
        getch();
    getch();
}
