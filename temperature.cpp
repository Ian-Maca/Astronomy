#include <iostream>
#include<string>
#include<math.h>

double surfaceTempStar = 5778;
double radiusOfStar = 695500000;

double getPlanetTemp(double distance);

int main()
{
    std::cout << "Distance from star: " << std::endl;
    double d;
    std::cin >> d;
    
    double ret = getPlanetTemp(d);
    
    std::cout << "Temperature: " << ret << std::endl;
    
    return 0;
}

double getPlanetTemp(double distance)
{
    return surfaceTempStar * sqrt(radiusOfStar / (2 * distance));
}
