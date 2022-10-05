

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double t, z,x;
    cout << "Input t: "; cin >> t;
    cout << "Input z: "; cin >> z;
    if (cos(t + z) > 0 && t != 0)
    {
        x = 4 * log(pow(cos(t + z), 3)) - z / t;
        cout << "\nx=" << x << endl;
    }
    else cout << "Resheniya net!\n";
    return 0;
}

