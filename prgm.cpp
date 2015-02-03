#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int x, y;
    cout << "Enter two integers";
    cin >> x >> y;
    cout << "First number in decimal " << x
        << " in hex " << hex << x << endl;
    float a, b;
    cout << "Enter 2 real numbers";
    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << "The sum is " << setw(7) << a + b << endl;
    return 0;
}
