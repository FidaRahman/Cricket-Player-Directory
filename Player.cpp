//
// Created by Fida Rahman on 4/21/21.
//

#include "Player.h"
#include <iostream>

using namespace std;
const string Player::ground = "RPL";

Player::Player(string name, int age, string country) {
    this->name=name;
    this->age=age;
    this->country=country;
}

//setters for storing data

void Player::setName(string name) {
    this->name=name;
}

void Player::setAge(int age) {
    this->age=age;
}

void Player::setCountry(string country) {
    this->country=country;
}

//getters for getting data
string Player::getName() {
    return this->name;
}

int Player::getAge() {
    return this->age;
}

string Player::getCountry() {
    return this->country;
}


Player::Player() {

}

string Player::getGround() {
    return this->ground;//static

}

string Player::getFieldingAction() {
    return "Pick-Up and Throw";
}


