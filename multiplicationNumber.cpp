#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int num , mul, i ;
    cout << "Enter Multiplication Number: ";
    cin >> num;

    for (i = 1; i <= 10; i++){

        cout <<num << " x " << i <<" = " << num * i <<endl;
    }

getch();
}
