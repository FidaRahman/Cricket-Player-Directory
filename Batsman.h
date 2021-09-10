//
// Created by Fida Rahman on 4/21/21.
//

#ifndef PLAYERDIRECTORY_BATSMAN_H
#define PLAYERDIRECTORY_BATSMAN_H
#include <string>
#include <iostream>

//friend not included
//friend void get_batsmanInfo (Batsman bt)
//virtual
using namespace std;
#include "Player.h"

//Batsman inherits from Player class(Parent Class)
class Batsman:public Player {

private:
    string battingHand;
    string batBrand;
    string favoriteShot;
    static const string ground;

public:
    Batsman(string battingHand,string favoriteShot);
    void setBattingHand(string battingHand);
    void setBatBrand(string batBrand);
    void setFavoriteShot(string favoriteShot);

    string getBattingHand();
    string getBatBrand();
    string getFavoriteShot();
    string getGround();//static


    friend void getBatsmanInfo (Batsman bt);//friend

    Batsman();

};


#endif //PLAYERDIRECTORY_BATSMAN_H

