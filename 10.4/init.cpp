#include "init.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsInit::init(double** d) {
    for (int i = 0; i < n; i++) {
        d[i] = new double[m];
        for (int j = 0; j < m; j++)
        {
            cout << i << " " << j << " ";
            cin >> d[i][j];
        }
    }
}
