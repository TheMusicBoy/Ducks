#include "class.h"

namespace d {

	void notQuak::quak() {}
	void Quak::quak() {
		std::cout << "QUAAAAAAAA!!!!!\n";
	}


	void Fly::fly() {
		std::cout << "*Flying*";
	}

	void notFly::fly() {
		std::cout << "*not Flying*";
	}

	void Duck_base::swim() {
		std::cout << "bool-bool\n";
	}

	void MarlladDuck::display() {
		std::cout << "MarlledDuck\n";
	}

	void RedheadDuck::display() {
		std::cout << "RedheadDuck\n";
	}

}