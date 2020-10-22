#include <iostream>
#include "anomaly_detection.h"
int main() {
auto size = 2;
float barx [size] = { -6, -4 };
float bary [size] = { 3, 6 };

auto variancex = var(barx, size);
auto variancey = var(bary, size);
std::cout << "the variance of x is  : " << variancex << std::endl;
std::cout << "the variance of y is  : " << variancey << std::endl;
auto covariance = cov (barx, bary, size);
std::cout << "the covariance  of x and  y is  : " << covariance << std::endl;
auto pearsoncorrelation = pearson(barx, bary, size);
std::cout << "the pearson correlation : " << pearsoncorrelation << std::endl;



Point* ps[size];
	for(int i=0;i<size;i++)
		ps[i]=new Point(barx[i],bary[i]);

Line l=linear_reg(ps,size);

std::cout << "the line is  : " << l.f(1) << std::endl;

}

 











