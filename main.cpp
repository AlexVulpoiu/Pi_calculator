#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double distance(double x, double y, double z, double t) {
    return sqrt(pow(x - z, 2) + pow(y - t, 2));
}

int n, i, inCircle;
double x, y;

int main() {

    cout << "Number of random generated points: ";
    cin >> n;

    inCircle = 0;
    for(i = 0; i < n; i++) {
        x = (double) random() / RAND_MAX;
        y = (double) random() / RAND_MAX;

        if(distance(0.5, 0.5, x, y) <= 0.5) {
            inCircle++;
        }
    }

    cout << "Approximate value for pi is: " << 1.0 * inCircle / (1.0 * n) * 4 << '\n';

    return 0;
}
