#include <iostream>;
#include <conio.h>;

using namespace std;
double myFactoril (int num){
   int total = 1, i ;
   for (i = 1; i <= num; i++){
    total = total * i;
   }
   return total;
}

int main (){
    int num ;
    cout <<"Enter Factorial Number: ";
    cin >> num ;

   cout << myFactoril(num);
}
