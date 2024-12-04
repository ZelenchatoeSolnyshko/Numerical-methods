// soso.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;
typedef struct {
    double x;
    double y;
} Point;


double lagrangeInterpolation(int n, Point* points, double value) 
{
    double res = 0.0;

    for (int i = 0; i < n; i++) {
        double tmp = points[i].y;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                tmp *= (value - points[j].x) / (points[i].x - points[j].x);
            }
        }
        res += tmp;
    }

    return res;
}

double f(double x)
{
    return pow(x, 3) + 2 * x;
}


int main()
{
    //первая функция
    int n;

    cout << "Enter the size of first function: ";
    cin >> n;
    Point points1[222];


    cout << "Enter all points (x y):";
    for (int i = 0; i < n; i++) {
        cin >> points1[i].x;
        cin >> points1[i].y;
    }
    double value1;
    cout << "Enter the value for the interpolation for the first function ";
    cin >> value1;

    cout << "The Value  of interpotion of Lagrange for the first function for " << value1 << " is: " << lagrangeInterpolation(n, points1, value1) << endl;






    //вторая функция
    int m;
    cout << "Enter the size of second function: ";
    cin >> m;
    Point points2[222];
    cout << "Enter all arguments:";
    for (int i = 0; i < m; i++) {
        cin >> points2[i].x;
    }
    for (int j = 0; j < m; j++)
    {
        points2[j].y = f(points2[j].x);
    }
    double value2;
    cout << "Enter the value for the interpolation for the second function: ";
    cin >> value2;

    cout << "The Value  of interpotion of Lagrange for the second function for " << value2 << " is " << lagrangeInterpolation(m, points2, value2) << endl;

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
/*int n;
    cout << "Enter the size of vectors for first function: ";
    cin >> n;

    vector<double> x1(n);
    vector<double> y1(n);
    vectors(n, x1);
    vectors(n, y1);

    double value1;
    cout << "Enter the value for the interpolation for first function: ";
    cin >> value1;

    double itog = lagrangeInterpolation(n, x1, y1, value1);

    cout << "This is the Value  of interpotion of Lagrange for first function " << value1 << itog << endl;

    //вторая функция
    int m;
    cout << "Enter the size of vectors for second function: ";
    cin >> m;

    vector<double> x2(m);
    vector<double> y2(m);
    vectors(m, x2);
    for (int i = 0; i < m; i++) 
    {
        y2[i] = pow(x2[i], 3) + 2 * x2[i];
    }
    double value2;
    cout << "Enter the value for the interpolation for second function: ";
    cin >> value2;

    double res = lagrangeInterpolation(m, x2, y2, value2);
    cout << "This is the Value  of interpotion of Lagrange for second function " << value2 << res << endl;*/