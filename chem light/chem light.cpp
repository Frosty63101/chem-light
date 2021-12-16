#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#define PI 3.14159265
constexpr auto c = 300000000000000000;
constexpr auto h = 0.000000000000004136;

int main()
{
	float r, t, e, w, d, tf;

	std::cout << "enter distance between ridges and eV\n";
	std::cin >> r;
	//std::cin >> t;
	std::cin >> e;

	w = (h * c) / e;

	std::cout << w << "\n";

	t = asin(w / r);

	tf = (t * (180 / PI));

	std::cout << tf << "\n";

	d = tan(t) * (80);

	std::cout << d << "\n";
}