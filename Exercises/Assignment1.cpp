#include <iostream>
using namespace std;

class Persoana {
  public:
    int Varsta;
    string Nume;
};

int main() {
  Persoana persoana1;

  int varsta1;
  string nume1;
  cout << "Introduceti varsta: ";
  cin >> varsta1;
  cout << "Introduceti numele: ";
  cin >> nume1;
  cout << "\n";

  persoana1.Varsta = varsta1;
  persoana1.Nume = nume1;


  cout << "Ma numesc " << persoana1.Nume << " si am " << persoana1.Varsta <<" de ani. \n";

  return 0;
}
