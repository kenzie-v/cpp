#ifndef FILEFILTER_H
#define FILEFILTER_H
#include <fstream>

class FileFilter {
private:
public:
    FileFilter();

    virtual void doFilter(std::ifstream &in, std::ofstream &out) = 0;
    virtual char transform(char ch) = 0; // transforming character
};

#endif