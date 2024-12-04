// soso.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <functional>
#include <math.h>

using namespace std;

double squareRectangleIntegration(double (*f)(double), double min, double max, int n) {
    double h = (max - min) / n;  
    double s = 0.0;

    for (int i = 0; i < n; i++) 
    {
  
        double x = min + i * h;
        s += f(x) * h;  
    }

    return s;
}

double theRungeRule(double (*f)(double), double min, double max, int n)
{
    int x2n = n * 2;
    return (squareRectangleIntegration(f, min, max, x2n) - squareRectangleIntegration(f, min, max, n)) / 3.0;
}

double f1(double x) 
{
    return 4 * x - 3;  
}

double f2(double x)
{
    return x * sin(x);
}

int main() {

    //первое задание
    int n;
    cout << "Enter the range of integration for the first function: ";
    cin >> n;

    double a;
    double b;
    cout << "Enter the limits of integration for the first function: ";
    cin >> a;
    cin >> b;

    cout << "Real value of the integral for the first function is   52" << endl;

    cout << "The value of rectangle in range from " << a << "to " << b << "for the first function is    " << squareRectangleIntegration(f1, a, b, n) << endl;

    cout << "Error estiomation according to the Runge Rule for the first function is   " << theRungeRule(f1, a, b, n) << endl;




    //второе задание
    int m;
    cout << "Enter the range of integration for the second function: ";
    cin >> m;

    double c;
    double d;
    cout << "Enter the limits of integration for the second function: ";
    cin >> c;
    cin >> d;

    cout << "Real value of the integral for the second function is   - 6.28319" << endl;

    cout << "The value of rectangle in range from " << c << "to " << d << "for the second function is    " << squareRectangleIntegration(f2, c, d, m) << endl;

    cout << "Error estiomation according to the Runge Rule for the second function is   " << theRungeRule(f2, c, d, m) << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
