// soso.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


typedef struct {
    double x;
    double y;
} Point;

double linearInterpolation(Point p1, Point p2, double value) 
{
    if (value < p1.x || value > p2.x) 
    {
        cout << "The value isn't between  " << p1.x << "  and  " << p2.x << endl;
        return 0.0;
    }
    return p1.y + (p2.y - p1.y) * (value - p1.x) / (p2.x - p1.x);
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    Point points[222];
    cout << "Enter all x: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> points[i].x;
    }
    cout << "Enter all y: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> points[i].y;
    }

    double value;
    cout << "Enter the value of interpolation: " << endl;
    cin >> value;

    
    for (int i = 0; i < n - 1; i++) {
        if (value >= points[i].x && value <= points[i + 1].x) {
            double res = linearInterpolation(points[i], points[i + 1], value);
            cout << "The value of linear interpolation is  " << res << endl;
            return;
        }
    }

    cout << "The value is not within the range of the interpolation" << endl;
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
