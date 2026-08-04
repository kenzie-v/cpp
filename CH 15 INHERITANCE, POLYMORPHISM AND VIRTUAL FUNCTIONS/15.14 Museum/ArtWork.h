//
// Created by Kenzie on 8/3/26.
//

#ifndef ARTWORK_H
#define ARTWORK_H

#include <string>

class ArtWork {
private:
    static int total_number;
    std::string serial;
    std::string name;
    int year;
public:
    ArtWork();

    void set_name(std::string &nm);
    std::string get_name();
};




#endif //INC_15_14_MUSEUM_ARTWORK_H
