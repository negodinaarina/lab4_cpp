#include <iostream>
using namespace std;

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