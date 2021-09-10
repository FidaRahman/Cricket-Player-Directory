//
// Created by Fida Rahman on 4/21/21.
//

#include "Batsman.h"
#include <string>
#include <iostream>

using namespace std;


Batsman::Batsman(string battingHand, string favoriteShot) {
    this->battingHand=battingHand;
    this->favoriteShot=favoriteShot;

}

void Batsman::setBattingHand(string battingHand) {
    this->battingHand=battingHand;

}

void Batsman::setBatBrand(string batBrand) {
    this->batBrand=batBrand;
}

void Batsman::setFavoriteShot(string favoriteShot) {
    this->favoriteShot=favoriteShot;
}

string Batsman::getBattingHand() {
    return this->battingHand;
}

string Batsman::getBatBrand() {
    return this->batBrand;
}

string Batsman::getFavoriteShot() {
    return this->favoriteShot;
}

void getBatsmanInfo(Batsman bt) {
    cout << "Name: " << bt.getName() << endl;
    cout << "Age: " << bt.getAge() << endl ;
    cout << "Country: " << bt.getCountry() << endl ;
    cout << "Batting Hand: " << bt.battingHand << endl;
    cout << "Favourite Shot: " << bt.favoriteShot << endl;
    cout << "Bat brand: " << bt.batBrand << endl;
    cout << "Fielding action: " << bt.getFieldingAction() << endl;


}//friend class

Batsman::Batsman() {

}




