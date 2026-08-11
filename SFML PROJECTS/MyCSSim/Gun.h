//
// Created by Kenzie on 8/10/26.
//

#ifndef MYCSSIM_GUN_H
#define MYCSSIM_GUN_H
#include <SFML/Graphics.hpp>
#include <vector>

class Gun {
private:
    std::vector<sf::Vector2f> recoilPattern;
    int shotIndx;
    sf::Vector2f recoil;
public:
    Gun();

    void shoot();
    void reset();
};


#endif //MYCSSIM_GUN_H
