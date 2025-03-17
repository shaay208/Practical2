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
    Pie* piePtr = nullptr;
    int choice;

    std::cout << "Select a pie:\n1. Apple Pie\n2. Raspberry Pie\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    if (choice == 1) {
        piePtr = new ApplePie();
    }
    else if (choice == 2) {
        piePtr = new RaspberryPie();
    }
    else {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }

    std::cout << "You selected: " << piePtr->description() << std::endl;

    delete piePtr;
    return 0;
}