// soso.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <vector>
#include <cmath> 

#define MAX_SIZE 22
using namespace std;

    double determinant(vector<vector<double>>&matrix, int n) {
        double det = 1.0;

        for (int i = 0; i < n; i++) 
        {
            double maxEl = fabs(matrix[i][i]);
            int maxRow = i;

            for (int k = i + 1; k < n; k++) {
                if (fabs(matrix[k][i]) > maxEl) {
                    maxEl = fabs(matrix[k][i]);
                    maxRow = k;
                }
            }

            
            if (maxRow != i) {
                swap(matrix[i], matrix[maxRow]);
                det = -det;
            }

            
            if (fabs(matrix[i][i]) < 1e-12) {
                return 0.0;
            }

          
            for (int k = i + 1; k < n; k++) {
                double c = -matrix[k][i] / matrix[i][i];
                for (int j = i; j < n; j++) {
                    matrix[k][j] += c * matrix[i][j];
                }
            }

           
            det *= matrix[i][i];
        }

        return det;
    }

    int main() 
    {
        vector<vector<double>> matrix(MAX_SIZE, vector<double>(MAX_SIZE));
        int n;
        cout << "Enter the size of matrix: ";
        cin >> n;

        if (n > MAX_SIZE) {
            cout << "The maximum size of the matrix has been exceeded " << endl;
            return 1;
        }

        cout << "Enter the elements of the matrix (" << n << "x" << n << "): ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        double det = determinant(matrix, n);
        cout << "The value of the determinant of a given matrix: " << det << endl;
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
