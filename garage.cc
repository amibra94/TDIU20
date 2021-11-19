#include "garage.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


Car::Car(string brand, string model, int price): bd{brand}, ml{model}, pe{price} {}
Garage::Garage(string name, int size): ne{name}, sz{size}, v{} {}
ostream& operator<<(std::ostream & o, Car const & c)
{
  o << c.bd << ", " << c.ml << ", " << c.pe << endl;
  return o;
}

void Garage::print(std::ostream & os) const
{
  os << "Name of the garage: " << ne << endl;
  os << "Maximum allowed number of cars inside the garage: " << sz << endl;
  for(auto c : v)
  {
      os << c;
  }
  
}
void Garage::add_car(Car const & car)
{
    v.push_back(car);
}

