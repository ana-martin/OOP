#include <iostream>

using namespace std;

class Animal
{
public:
    int legs;

    void SetName(string nm) { name = nm; }
    string GetName() { return name; }

private:
    string name;
};

int main()
{
    Animal cat, dog;

    cat.SetName("Cat");
    cat.legs = 4;

    dog.SetName("Dog");
    dog.legs = 4;

    int inputLegs;
    string inputName;

    std::cout << "-Animal 1-" << "\n";
    std::cout << "Name: " << cat.GetName() << "\n";
    std::cout << "Legs: " << cat.legs << "\n \n";

    std::cout << "-Animal 2-" << "\n";
    std::cout << "Name: " << dog.GetName() << "\n";
    std::cout << "Legs: " << dog.legs << "\n \n";

    
    std::cout << "Add Name: ";
    std::cin >> inputName;
    cat.SetName(inputName);

    std::cout << "Add Nr. of Legs: ";
    std::cin >> inputLegs;
    cat.legs = inputLegs;
    std::cout << "\n";

    std::cout << "-New cat-" <<"\n";
    std::cout << "Name: " << cat.GetName() <<"\n";
    std::cout << "Legs: " << cat.legs << "\n" << "\n";
}

