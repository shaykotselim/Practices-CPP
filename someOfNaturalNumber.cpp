#include <iostream>;
#include <conio.h>;

using namespace std;

int main(){

    int num, sum, i ;

    cout << "Enter the value SUM OF NUMBER: " <<endl;
    cin >> num;
    for (i = 0; i <= num; i ++){
        sum = sum + i;
    }
    cout << sum ;

    getch();
}
