#include <iostream>
#include <ctime>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    int m = 4, n = 4, i, j = 0, k = 0;
    while (k < m && j < n) {
        for (i = j; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
        if (k < m) {
            for (i = n - 1; i >= j; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
        if (j < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][j] << " ";
            }
            j++;
        }
    }
    return 0;
}

