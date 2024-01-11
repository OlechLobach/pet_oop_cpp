#include "dog.h"
#include "cat.h"
#include "parrot.h"

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");
    Parrot myParrot("Polly");

    myDog.getInfo();
    cout << endl;

    myCat.getInfo();
    cout << endl;

    myParrot.getInfo();

    return 0;
}