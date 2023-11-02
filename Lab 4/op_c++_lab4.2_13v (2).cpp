#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ви можете вписати double k=0,a,...; ми це зробили для того,щоб ви розуміли для чого ці змінні
    double k=0; // Наша k за умовою,яка в циклі буде збільшуватись
    double a;  // а яке ми за умовою вводимо з клавіатури
    double x; // х яке ми за умовою вводимо з клавіатури
    double E; // число Ейлера,або простими словами обмежувач
    cout << "Type x,a,E = " << endl; // вписуємо всі значення одразу,щоб не розтягувати код
    cin >> x >> a >>E;
    // Маємо перевірити чи ці значення підходять за умовою, ви можете добавити фігурні дужки,але це не треба,так як в нас тільки одна строчка коду
    if (x==0)
        cout <<"-" << endl; // перевевіряємо за умовою
    if (a==0)
        cout << "-" <<endl; //Вводимо числа та входимо в перевірку
    if (E < 0)
        cout <<"-" <<endl; //E - обмеження за умовою 0.005(якщо не помиляюсь)
    // Ви можете вписати double f=1,powA=1,...; ми це зробили для того,щоб ви розуміли для чого ці змінні
    double f=1; // Наш факторіал,який має = 1,тому що факторіал 0 та 1 це 1
    double powA=1; // це степінь (а+х)
    double powX=1; // це степінь 2
    double dod; // це наша відповідь,яка має дорівнювати додатньому
    double sum=0; // наш результат який ми виводимо
    double aplusx; // зробимо з а+х змінну,щоб оптимізувати наш код та щоб комп не путав значення(таке буває)

    do {
        if (k > 1)  // так як факторіал 0 = 1 та 1 = 1,то ми починаємо обраховувати після того,як k стане більше за 1
            f*=k;
        if (k < 0)  // у нас від'ємне значення тому його треба перевернути,як ми зробили нижче в powA = 1 / (powA *aplusx)
            powA=1;
        if ( k > 0)
            powX = powX * (a*a); // тут маємо 2*k, також умова буде виконуватись тільки тоді коли k>0
        aplusx = a + x; // напишемо а + х для оптимізації та для того щоб компілювали потрібні значення
        if (k > 0)
            powA = 1 / (powA *aplusx); // так як степень в нас -k,то ми маємо дріб
        dod = powA / (powX+f); // підставляємо змінні дивлячись на нашу умову,та отримуємо результат,який вписуємо в sum,щоб в кінці вивести
        sum += dod; // ця змінна для виведення нашого результату
        k++;      //пишемо тут так щоб кожен раз k додавався і цикл повторювався
    } while (abs(dod) >=E); // тут робимо так щоб модуль нашого обрахунку був більше або дорівнював обмеженню
    cout << "Result =" <<sum <<endl; // виводимо результат :)
    return 0;
}