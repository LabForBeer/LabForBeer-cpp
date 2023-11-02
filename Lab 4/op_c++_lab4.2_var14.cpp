#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, a, e, S = 0, X1 = 1, A1 = 1, F = 1, K1, S1 = 0, C, k = 1; // задаємо змінні
    cout << "x, a, e = "; // виводимо текст з проханням ввести змінні
    cin >> x >> a >> e; // ввід змінних
    while (x == 0 or a == 0 or e <= 0) // робимо цикл на перевірку того чи змінні х та а рівні 0, а е менший-рівний 0, якщо це підтверджується то ввиводить помилку
    {
        cout << "eror \n x, a, e = ";
        cin >> x >> a >> e;  // повторний ввід змінних
    }

    do
    {
        X1 = (X1 * x);  // підносимо х до степеня k
        C = sin(X1);    // шукаємо сінус х в степені k
        A1 = A1 * a * a; // підносимо а до степеня 2k
        K1 = 2 * k; // множимо k на 2 для того щоб потім знайти факторіал
        F = F * k * K1; // знаходимо факторіал 2k
        S1 = C / (A1 * F); // знаходимо суму одного циклу
        S = S + S1; // додаємо суму цього циклу до всії попередніх
        k++; // збільшуємо k щоразу на 1
    } while (abs(S1) >= e); // повторюємо цикл поки модуль циклу буде меншим за введену точність
    cout << S; // вивід відповіді
}
