// only works for positive integers
// returns long between 0 and 600 (y-axis poining down)
#include <iostream>
#define M_PI  314
long bhaskara(int x) {

	long y = x;

	bool ind = false;
	while (y > M_PI)
	{
		y -= M_PI;
		ind = !ind;
	}

	long ret = (16 * y * (M_PI - y) * 300)
		/ (5 * M_PI * M_PI - 4 * y * (M_PI - y));

	// if (ind) ret = ret * (-1);
	if (ind)
		return 300 + ret;
	else
		return 300 - ret;
}
int main() {
	for (int i = 0; i < 800; i++)
		std::cout << bhaskara(i) << ' ';
}
