// soso.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;


typedef struct {
    double x;
    double y;
} Point;

double left(Point p1, Point p2, double h) 
{
    return (p2.y - p1.y)/h;
}

double right(Point p1, Point p2, double h)
{
    return (p2.y - p1.y) / h;
}


double central(Point p1, Point p2, double h)
{
    return (p2.y - p1.y) / 2 * h;
}


int main() {

    Point points[222];

    
    for (int i = 0; i < 180; i++) 
    {
        points[i].x = i;
        points[i].y = sin(i);
    }

    double value;
    cout << "Enter the value of differentiation: " << endl;
    cin >> value;

    
    for (int i = 0; i < 180 - 2; i++) {
        if (value >= points[i].x && value <= points[i + 1].x) {
            cout << "The value of the left difference derivative is " << left((Point) points[i - 1], (Point) points[i], 1) << endl;
            cout << "The value of the right difference derivative is " << right((Point) points[i], (Point) points[i + 1], 1) << endl;
            cout << "The value of the central difference derivative is " << central((Point) points[i - 1], (Point) points[i + 1], 1) << endl;
            return 0;
        }
    }
    return 0;
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
