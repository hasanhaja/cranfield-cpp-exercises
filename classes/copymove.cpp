#include <iostream>
#include <string>
#include <utility>

class Animal {
private:
    std::string name;
    int age;
    static int num_of_animals;
public:
    Animal(std::string &name, int age);
    ~Animal();
    void print();
    std::string move_name_out();
};

void consume_string(std::string basicString);

int Animal::num_of_animals = 0;

// Animal::Animal(std::string name, int age) : name(std::move(name)), age(age) {
Animal::Animal(std::string &name, int age) : name(std::move(name)), age(age) {
    num_of_animals++;
}
Animal::~Animal() {
    std::cout << name << " is now dead." << std::endl;
}
void Animal::print() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

std::string Animal::move_name_out() {
    return std::move(name);
}

int main() {
    std::string j_name = "Jerry";
    std::string t_name = "Tom";
    Animal jerry(j_name, 12);

    Animal *tom = new Animal(t_name, 15);   // Allocated on the Heap

    // A simple to string
    jerry.print();
    tom->print();

    std::cout << "moved name: " << j_name << std::endl;
    std::cout << "moved name: " << t_name << std::endl;

    std::string j_moved = jerry.move_name_out();
    std::string t_moved = tom->move_name_out();

    std::cout << "moved name: " << j_moved << std::endl;
    std::cout << "moved name: " << t_moved << std::endl;

    // A simple to string
    jerry.print();
    tom->print();

    delete tom;     // Deallocation of heap memory
                    // Also, it doesn't matter when you call it.

    std::string val = "Some string";
    consume_string(val);

    std::cout << "Val: " << val << std::endl;

    consume_string(std::move(val));

    std::cout << "Val: " << val << std::endl;
    tom->print();   // tom is deconstructed after the last use.

    return 0;
}

void consume_string(std::string basicString) {
    std::cout << basicString << ": consumed." << std::endl;
}
