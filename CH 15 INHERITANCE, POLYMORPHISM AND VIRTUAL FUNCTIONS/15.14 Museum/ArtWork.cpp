//
// Created by Kenzie on 8/3/26.
//

#include "ArtWork.h"

int ArtWork::total_number;

ArtWork::ArtWork() {
    serial = ++total_number;
}

void ArtWork::set_name(std::string &nm) {
    name = nm;
}