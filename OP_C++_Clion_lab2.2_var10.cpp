#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,a,b,y; // Наші змінні , використовуємо double щоб показало точний результат, але я думаю можна використовувати і int (але не забуваємо,він не вивиде числа після коми)

    cout << "Vvedit znachenya x,a,b ta y" << endl; // Вводимо змінні
    cin >> x >> a >> b >> y;

    cout << "x = " << x << endl; // На друк виводимо значення вхідної змінної
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    double sum,up,down; // Розділимо вираз на верхню частину та нижню,щоб не було дурних помилок в обчислені
    up = cos(pow(x,3)) - a * sqrt(6) - cos(3*a*b); // Наш верхній вираз
    down = pow(sin(a* sin(x)+log10(y)),2); // Наш нижній вираз
    sum = up / down; // Тепер ділимо це як нам сказано в умові
    cout << "Result = " << sum; // Виводимо результат :)
}
