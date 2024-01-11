#include "pet.h"


Pet::Pet(const string& petName, const string& petType) : name(petName), type(petType) {}

void Pet::getInfo() const {
    cout << "Name: " << name << "\nType: " << type << endl;
}