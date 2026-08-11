
#include "ArtWork.h"
#include "Sculpture.h"
#include "Statue.h"
#include <iostream>
#include <string>

int main() {
    ArtWork myWorks;
    std::string name = "Mona Lisa";
    myWorks.set_name(name);
    std::cout << myWorks.get_name() << std::endl;

    return 0;
}
