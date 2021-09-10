//
// Created by Fida Rahman on 4/21/21.
//

#include "Bowler.h"
#include <string>
#include <iostream>

using namespace std;

Bowler::Bowler(string bowlingHand, string type) {
    this->bowlingHand=bowlingHand;
    this->type=type;
}

void Bowler::setBowlingHand(string bowlingHand) {
    this->bowlingHand=bowlingHand;
}

void Bowler::setType(string type) {
    this->type=type;
}

void Bowler::setFavoriteDelivery(string favoriteDelivery) {
    this->favoriteDelivery=favoriteDelivery;
}

string Bowler::getBowlingHand() {
    return this->bowlingHand;
}

string Bowler::getType() {
    return this->type;
}

string Bowler::getFavoriteDelivery() {
    return this->favoriteDelivery;
}


Bowler::Bowler() {

}

