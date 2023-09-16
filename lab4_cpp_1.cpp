#include <bits/stdc++.h>
using namespace std;
// Прототип функции вычисления корней
int Myroot(double, double, double, double&, double&);
//Прототип функции вывода
void print(double, double, int);

int main(){
    //Просим пользователя ввсети коэффициенты уравнения, инициализируем a, b, c
    double a, b, c, x1 = 0, x2 = 0; int res;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    res = Myroot(a, b, c, x1, x2);
    print(x1, x2, res);
    return 0;
}
//функция вычисления корней, принимает коэффициэнты и ссылки на x1 и x2,
//в зависимости от значения дискриминанта возвращает -1, 0 или 1
//вычисляет корни также в зависимости от дискриминанта
int Myroot(double a, double b, double c, double& x1, double& x2){
    if(b*b < 4*a*c){
        return -1;
    }
    else if(b*b == 4*a*c){
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else if(b*b > 4*a*c){
        double d = sqrt(abs(b * b - 4 * a * c));
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        return 1;
    }
}
//Функция вывода резудьтата вычислений, на вход принимает корни и результат работы Myroot
void print(double x1, double x2, int res)
{
    if(res==0){
        cout << "Equation roots are real and same\n" << x1;
    }
    else if(res==1){
        cout << "Equation roots are real and different\n " << x1 << " " << x2;
    }
    else if(res==-1){
        cout << "Equation roots are complex";
    }
}
