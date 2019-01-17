#include <iostream>
#include<string>
#include<math.h>

double PI = 3.141592;
double ALPHA = 0.0000000567;

double getLuminosity(double radius, double temp);

int main()
{
    std::cout << "R: " << std::endl;
    double r;
    std::cin >> r;
    
    std::cout << "Temp: " << std::endl;
    double t;
    std::cin >> t;
    
    double ret = getLuminosity(r, t);
    
    std::cout << "Luminosity: " << ret << std::endl;
    
    return 0;
}

double getLuminosity(double radius, double temp)
{
    return 4 * PI * pow(radius, 2) * ALPHA * pow(temp, 4);
}
