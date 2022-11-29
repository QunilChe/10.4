#include "mult.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsMult::mult(double** x, double** y, double** mt) {
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