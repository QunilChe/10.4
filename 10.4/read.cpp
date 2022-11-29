#include "read.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsRead::read(double** d) {
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