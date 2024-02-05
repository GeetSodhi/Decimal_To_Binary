#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n :" << endl;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = pow(2, i) + ans;
        }
        n = n / 10;
        i++;
        /* code */
    }
    cout << ans;

    return 0;
}