#ifndef GARAGE_H
#define GARAGE_H
#include <string>
#include <iostream>
#include <vector>


class Car
{
private:
  std::string bd; //brand
  std::string ml; //model
  int pe; //price
public:
  Car(std::string brand, std::string model, int price);
  friend std::ostream& operator<<(std::ostream & o, Car const & c);
  std::string set_car_name(std::string car_name);
};

class Garage{
private:
  std::string ne; //name
  int sz; //size
  std::vector<Car> v;
public:
  Garage(std::string name, int size);
  void print(std::ostream & os) const;
  void add_car(Car const & car);
  };


#endif
