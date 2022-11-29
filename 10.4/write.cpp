#include "write.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsWrite::write(double** d, char* gg) {
        ofstream f(gg);
        f << n << endl << m << endl;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                f << d[i][j] << endl;
    }
