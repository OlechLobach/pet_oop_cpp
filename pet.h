#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>

using namespace std;

class Pet {
protected:
    string name;
    string type;

public:
    Pet(const string& petName, const string& petType);
    void getInfo() const;
};

#endif