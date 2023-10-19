#include <iostream>
#include <cmath>

using namespace std;

// The function for which we want to find the root
double f(double x)
{
    return x * x - 16; // Replace with your own function
}

int main()
{
    double a = 0.0;          // Left endpoint of the initial interval
    double b = 5.0;          // Right endpoint of the initial interval
    double tolerance = 1e-6; // Tolerance for stopping criterion
    int maxIterations = 100; // Maximum number of iterations

    cout << "Iteration  |  a         |  b         |  x         |  f(x)      " << endl;
    cout << "-----------------------------------------------------------" << endl;

    for (int i = 0; i < maxIterations; i++)
    {
        double x = (a + b) / 2;
        double fx = f(x);

        cout << "   " << i + 1 << "      |  " << a << "   |  " << b << "   |  " << x << "   |  " << fx << endl;

        if (std::abs(fx) < tolerance)
        {
            cout << "Converged to a root: " << x << endl;
            break;
        }

        if (fx * f(a) > 0)
        {
            a = x;
        }
        else
        {
            b = x;
        }
    }

    return 0;
}
