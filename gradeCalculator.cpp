#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int num , grade;
    cout << "Enter the student Score : " ;
    cin >> num ;
if(num > 100){
    cout << "It's not excepted" <<endl;
    return 0;
}
    if (num >= 90){
        cout << "Grade is : A \n";
        return 0;
    }else if(num >= 80){
        cout << "Grade is : B \n";
        return 0;
    }else if(num >= 70){
        cout << "Grade is : C \n";
        return 0;
    }else if(num >= 60){
        cout << "Grade is : D \n";
        return 0;
    }else if (num < 60){
        cout << "Grade is : F \n";
        return 0;
    }
    getch();
}
