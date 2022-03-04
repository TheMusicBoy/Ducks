#ifndef _CLASS_
#define _CLASS_

#include <iostream>

namespace d {
	
	class notQuak {
	public:
		static void quak();
	};

	class Quak {
	public:
		static void quak();
	};

	class Fly {
	public :
		static void fly();
	};

	class notFly {
	public:
		static void fly();
	};

	class Duck_base {
	public:
		void swim();
		virtual void quak() = NULL;
		virtual void display() = NULL;
		virtual void fly() = NULL;
	};

	template<typename _Quak, typename _Fly>
	class Duck : public Duck_base {
	public:
		void quak() override {
			_Quak::quak();
		}
		void fly() override {
			_Fly::fly();
		}
		virtual void display() = NULL;
	};

	class MarlladDuck : public Duck<Quak, Fly>{
	public:
		void display() override;
	};

	class RedheadDuck : public Duck<Quak, Fly> {
	public:
		void display() override;
	};


}

#endif