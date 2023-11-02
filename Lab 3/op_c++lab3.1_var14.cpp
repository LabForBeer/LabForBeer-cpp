#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double c , x , y , d , z , first , second , third ; // Задаємо змінні, які нам допомагатимуть робити операції.
    cout << " Please enter your expressions ( c , x , y , z , d ): " << '\n';// Просимо користувача ввести дані
    cin >> c >> x >> y >> z >> d; // Вводимо дані
    if ( c <= x & x <= y & y <= z & z <= d ){ // Виконуєм функцію if
        first = pow( x , 2 ) - ( pow( y , 2) * pow( z , 2) ); // Якщо воно правильне
        cout <<" Your answer is : " << first; // то програма закінчується тут
    }else // Якщо передумова була неправильною для наших значень переходимо на наступний if
    {
        if (d <= x & x <= y &  y <= z ){ // Виконуєм функцію if
            second = abs(x) + abs(y)+ abs(z); // Якщо воно правильне то виконуєм це і
            cout <<" Your answer is : "<< second; // закінчуем тут
        }
        else{ // ОСТАННІ УМОВИ IF ( Якщо жоден if нам не підійшов
            third = 3 * ( sqrt(pow( x , 2 ) + pow( y , 2) + pow( z , 2)) ); // , то оно автоматически переходит
            cout << " Your answer is : "<< third << '\n';// в конец и выводит данные)
        }
    }// КІНЕЦЬ ПРОГРАМИ
    return 0;
}