#include <iostream>
#include <cstdlib>  // Для функцій rand() та srand()
#include <Windows.h>

using namespace std;

const int MAX_SIZE = 400;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть розмір масиву (n): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Некоректний розмір масиву. Розмір масиву повинен бути в межах від 1 до " << MAX_SIZE << "." << endl;
        return 1;
    }

    // Ініціалізуємо генератор випадкових чисел
    srand(time(0));

    // Створюємо та заповнюємо масив випадковими числами
    int A[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 100 - 5; // Генеруємо числа в межах від -100 до 99
        cout << i+1 << " Елемент: " << A[i] << endl;
    }

    // Знаходимо максимальний і мінімальний елементи масиву
    int maxElement = A[0];
    int minElement = A[0];

    for (int i = 1; i < n; ++i) {
        if (A[i] > maxElement) {
            maxElement = A[i];
        }
        if (A[i] < minElement) {
            minElement = A[i];
        }
    }

    cout << "Максимальний елемент: " << maxElement << endl;
    cout << "Мінімальний елемент: " << minElement << endl;

    // Знаходимо кількість додатних елементів між максимальним і мінімальним
    int countPositive = 0;
    bool betweenMinMax = false;

    for (int i = 0; i < n; ++i) {
        if (A[i] == maxElement || A[i] == minElement) {
            if (betweenMinMax) {
                break; // Зупиняємо підрахунок, якщо знайшли максимальний або мінімальний елемент вдруге
            }
            betweenMinMax = true;
        }
        else if (betweenMinMax && A[i] > 0) {
            countPositive++;
        }
    }

    cout << "Кількість додатних елементів між максимальним і мінімальним: " << countPositive << endl;

    return 0;
}


