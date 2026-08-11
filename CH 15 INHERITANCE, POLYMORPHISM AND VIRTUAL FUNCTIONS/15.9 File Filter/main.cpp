// 15.9 File Filter 8.5.26
#include "FileFilter.h"
#include "Encryption.h"
#include "ToUppercase.h"
#include "KeepOGText.h"
#include <iostream>
#include <fstream>

int main() {
    Encryption encrypt(3);
    ToUppercase upper;
    KeepOGText keep;

    return 0;
}