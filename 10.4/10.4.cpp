#include <iostream>
#include <fstream>
using namespace std;
#include "var.h"
#include "init.h"
#include "mult.h"
#include "read.h"
#include "write.h"

using namespace nsVar;
using namespace nsInit;
using namespace nsMult;
using namespace nsWrite;
using namespace nsRead;

void init(int n, int m, double** d)
{


    for (int i = 0; i < n; i++) {
        d[i] = new double[m];
        for (int j = 0; j < m; j++)
        {
            cout << i << " " << j << " ";
            cin >> d[i][j];
        }
    }
}
void write(int n, int m, double** d, char* gg)
{
    ofstream f(gg);
    f << n << endl << m << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            f << d[i][j] << endl;
}
void read(int n, int m, double** d)
{
    ifstream f("file.txt");
    f >> n >> m;
    cout << n << "  " << m << endl;

    for (int i = 0; i < n; i++) {
        d[i] = new double[m];
        for (int j = 0; j < m; j++)
            f >> d[i][j];
    }
    f.close();
}
void mult(double** x, int n, int m, double** y, double** mt) {
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                temp += x[j][k] * y[k][j];
            }
            mt[i][j] = temp;
        }
    }

}
int main()
{
    int n, m;
    cin >> n >> m;
    double** d;
    double** f;
    d = new double* [n];
    f = new double* [n];
    double** c;
    c = new double* [n];
    init(n, m, d);
    init(n, m, f);
    char fname[100]; // ім'я першого файлу
    cout << "enter file name 1: "; cin >> fname;
    char fname2[100]; // ім'я першого файлу
    cout << "enter file name 1: "; cin >> fname2;
    write(n, m, d, fname);
    write(n, m, f, fname2);
    read(n, m, d);
    read(n, m, f);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << d[i][j] << "  ";
        cout << endl;
    }
    mult(d, n, m, f, c);
    char fname3[100] = { 3 }; // ім'я першого файлу
    write(n, m, c, fname3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << c[i][j] << "  ";
        cout << endl;
    }
    system("PAUSE");
    return 0;
}