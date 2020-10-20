#include <iostream>
#include "anomaly_detection.h"
int main() {
float barx [3] = { 10.5, 20.3, 30.7 };
float bary [3] = { 10.1, 20.2, 36.2 };
auto size = 3;
auto variancex = var(barx, size);
auto variancey = var(bary, size);
std::cout << "the variance of x is  : " << variancex << std::endl;
std::cout << "the variance of y is  : " << variancey << std::endl;
auto covariance = cov (barx, bary, 3);
std::cout << "the covariance  of x and  y is  : " << covariance << std::endl;
auto pearsoncorrelation = pearson(barx, bary, 3);
std::cout << "the pearson correlation : " << pearsoncorrelation << std::endl;


}

 











