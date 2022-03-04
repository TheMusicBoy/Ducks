#include <iostream>

#include "class.h"

int main() {
	d::MarlladDuck pup;
	d::RedheadDuck duck;

	d::Duck_base* unnamed_duck = &duck;

	unnamed_duck->display();
}