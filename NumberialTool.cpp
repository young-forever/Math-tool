#include"iostream"

double iNumDiff(double* y, double h)
{
	return 1.0 / (2.0*h)*(y[0] - 4 * y[1] + 3 * y[2]);
}

int main()
{
	double y[3] = { 0.0 };
	double h = 0.05;
	double yc = 0.5;
	y[0] = sin(yc-2*h);
	y[1] = sin(yc-h);
	y[2] = sin(yc);

	double diff_y =	iNumDiff(y, h);

	std::cout<<"Number_diff_y = " << diff_y << std::endl;
	std::cout << "Real_diff_y = " << cos(yc) << std::endl;

	while (1)
		;
	return 0;
}