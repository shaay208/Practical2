#include <iostream>
#include <string>

class Pie {
public:
	virtual std::string description() const = 0;
	virtual ~Pie() {}
};

class ApplePie : public Pie {
public:
	std::string description() const override {
		return "Apple Pie";
	}
};

class RaspberryPie : public Pie {
public:
	std::string description() const override {
		return "Raspberry Pie";
	}
};

int main() {
	ApplePie p;
	RaspberryPie r;

	std::cout << p.description() << std::endl;
	std::cout << r.description() << std::endl;

	return 0;
}