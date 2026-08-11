//
// Created by Kenzie on 8/3/26.
//

#include "ArtWork.h"

int ArtWork::total_number;

ArtWork::ArtWork() {
    serial = std::to_string(++total_number);
}

void ArtWork::set_name(std::string &nm) {
    name = nm;
}

std::string ArtWork::get_name() {
    return name;
}