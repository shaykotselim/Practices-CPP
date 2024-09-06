#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){

    int num =10 , total = 1, i ;

    for(i = 1; i <= num; i++){
        total = total * i;
    }
    cout << total;
    getch();
}
