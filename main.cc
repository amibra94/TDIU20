#include "garage.h"
#include <iostream>
using namespace std;

int main()
{
  Garage a{"West Coast", 10};
  Car a1{"BMW", "X6", 56000};
  Car a2{"Volvo", "V90", 400000};
  Car a3{"Saab", "95", 35000};
  a.add_car(a1);
  a.add_car(a2);
  a.add_car(a3);
  a.print(cout);
}
