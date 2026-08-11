#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include "FileFilter.h"

class Encryption : public FileFilter {
private:
    int key;
public:
    //Encryption();
    Encryption(int k) : key(k) {}

    void doFilter(std::ifstream &in, std::ofstream &out) override {

    }
    char transform(char ch) override {
        
    }

};

#endif