//
// Created by Fida Rahman on 4/21/21.
//

#ifndef PLAYERDIRECTORY_BOWLER_H
#define PLAYERDIRECTORY_BOWLER_H
#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

//Bowler inherits from Player Class (Parent class)
class Bowler:public Player {

private:
    string bowlingHand;
    string type;
    string favoriteDelivery;

public:
    Bowler(string bowlingHand,string type); //constructor
    void setBowlingHand(string bowlingHand);
    void setType(string type);
    void setFavoriteDelivery(string favoriteDelivery);

    string getBowlingHand();
    string getType();
    string getFavoriteDelivery();

    Bowler();

};


#endif //PLAYERDIRECTORY_BOWLER_H

