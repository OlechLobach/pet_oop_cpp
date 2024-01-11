#ifndef PARROT_H
#define PARROT_H

#include "pet.h"

class Parrot : public Pet {
public:
    Parrot(const string& parrotName);
};

#endif