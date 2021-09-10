//
// Created by Fida Rahman on 4/22/21.
//

#ifndef PLAYERDIRECTORY_WICKETKEEPER_H
#define PLAYERDIRECTORY_WICKETKEEPER_H
#include <string>
#include <iostream>
#include "Batsman.h" //Wicketkeeper inherits from Batsman class

using namespace std;


class Wicketkeeper: public Batsman{

private:
    string keepingHand;
    string glovesBrand;
    int keepingAction;

public:
    Wicketkeeper(int keepingAction);
    void setKeepingHand(string keepinghand);
    void setGlovesBrand(string glovesBrand);
    void setKeepingAction(int keepingAction);

    void fieldingAction(); //overriding (polymorphism)

    string getKeepingHand();
    string getGlovesBrand();
    int getKeepingAction();
    string getFieldingAction(); //virtual

    Wicketkeeper();


};


#endif //PLAYERDIRECTORY_WICKETKEEPER_H
