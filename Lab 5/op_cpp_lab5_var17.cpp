#include <iostream>
#include <Windows.h>    

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 200; // Максимальний розмір масиву
    int A[n]; // Оголошення масиву цілих чисел
    int count[n] = { 0 }; // Масив для лічильників кількості входжень кожного числа

    // Введення розміру масиву
    int size;
    cout << "Введіть розмір масиву (n <= " << n << "): ";
    cin >> size;

    if (size <= 0 || size > n) {
        cout << "Некоректний розмір масиву. Розмір має бути в межах від 1 до " << n << ".\n";
        return 1;
    }

    // Введення елементів масиву
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < size; i++) {
        cin >> A[i];
        count[A[i]]++; // Лічильник для поточного числа збільшується на 1
    }

    bool duplicatesFound = false;

    // Перевірка та виведення чисел, які повторюються лише один раз
    cout << "Числа, які повторюються лише один раз: ";
    for (int i = 0; i < size; i++) {
        if (count[A[i]] == 1) {
            cout << A[i] << " ";
            duplicatesFound = true;
        }
    }

    if (!duplicatesFound) {
        cout << "Не знайдено чисел, які повторюються лише один раз.\n";
    }

    return 0;
}
