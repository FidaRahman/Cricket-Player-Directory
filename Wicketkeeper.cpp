//
// Created by Fida Rahman on 4/22/21.
//

#include "Wicketkeeper.h"
#include <string>
#include <iostream>

using namespace std;

Wicketkeeper::Wicketkeeper(int keepingAction) {
    this->keepingAction=keepingAction;
}

void Wicketkeeper::setKeepingHand(string keepinghand) {
    this->keepingHand=keepingHand;
}

void Wicketkeeper::setGlovesBrand(string glovesBrand) {
    this->glovesBrand=glovesBrand;
}

void Wicketkeeper::setKeepingAction(int keepingAction) {
    this->keepingAction=keepingAction;
}

string Wicketkeeper::getFieldingAction() {
    return "Wears keeping gloves and throws from behind the stumps.";
}

string Wicketkeeper::getKeepingHand() {
    return this->keepingHand;
}

string Wicketkeeper::getGlovesBrand() {
    return this->glovesBrand;
}

int Wicketkeeper::getKeepingAction() {
    return this->keepingAction;
}

Wicketkeeper::Wicketkeeper() {

}



