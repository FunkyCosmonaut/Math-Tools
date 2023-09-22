#include <iostream>
#include <iomanip>
// This is the rosettacode implementation, going to upgrade later
typedef double F(double, double);

void euler(F f, double y0, double a, double b, double h)
{
    double y = y0;
    for(double t = a; t < b; t += h)
    {
        std::cout << std::fixed << std::setprecision(3) << t << " " << y << "\n";
        y += h * f(t,y);
    }
    std::cout << "done\n";
}
double newtonCoolingLaw(double, double t)
{  
      return -0.07 * (t-20);
}
double functiontwo(double x, double y)
{
    return 2*x - 3 * y + 1;
}

int main()
{
    //euler(newtonCoolingLaw, 100, 0, 5, 1);
    //
    //in order to determine y(1) = 3 for example, y0 needs to equal 3 and a needs to equal 1;
    euler(functiontwo, 3, 1, 1.2, 0.05);
}
