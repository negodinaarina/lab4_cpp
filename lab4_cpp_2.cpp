#include <iostream>
using namespace std;
//Прототип функции Input
bool Input(int&, int&);

int main()
{
    int a, b;
    if(!Input(a, b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << s;
    return 0;
}
//Функция принимает ссылки на a и b, просит ввести значение, производит извлечение и проверяет,
//если оно было произведено не успешно cin.fail() - возвращаем false, иначе - true
bool Input(int& a, int& b){
    cout << "Enter a\n";
    cin >> a;
    if (cin.fail()) {
        return false;
    }
    cout << "Enter b\n";
    cin >> b;
    if (cin.fail()) {
        return false;
    }
    return true;
}
