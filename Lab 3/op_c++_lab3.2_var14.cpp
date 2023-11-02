#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double  x , y , z ; // Задаємо змінні які допомагатимуть нам із завданням
    int k ; // наш switch (залежно від цього числа буде робитися певна дія)
    cout << " Please enter your expressions : ( x , y , z , k ) " << '\n'; // Просимо ввести значення
    cin >> x >> y >> z >> k ; // Вводимо значення
    switch (k) { // Підключаємо операцію switch , яка виконуватиметься залежно від зазначеної цифри k
        case 1: // Перший випадок
            cout <<"Your answer is : " << min( x , max ( y , z) ) << '\n';
            break;
        case 2: // Другий випадок
            cout << " Your answer is : " << min(pow(x , 2 ) , max (pow( y , 2) , pow( z , 2) ));
            break;
        case 3: // Це ми зробив проміжок між цифрою 2 та 7
        case 4: // Тобто цифри 3, 4, 5, 6, 7 буде робити дію другого випадку
        case 5:
        case 6:
        case 7:
            cout << " Your answer is : " << min(pow(x , 2 ) , max (pow( y , 2) , pow( z , 2) ));
            break;
        case 8: // Восьмий випадок
            cout << " Your answer is : " << min(abs(x) , max( y , z ));
            break;
        default : // Якщо користувач введе більше 8, тоді виконається ця дія.
            cout << " Your answer is : " << pow((pow( x , 2 ) + pow( y , 2 ) - pow( z , 2)) , 2);

    }
    return 0;
}