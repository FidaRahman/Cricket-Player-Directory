//
// Created by Fida Rahman on 4/21/21.
//
#include <string>
#ifndef PLAYERDIRECTORY_PLAYER_H
#define PLAYERDIRECTORY_PLAYER_H

using namespace std;

class Player {

private:
    string name;
    int age;
    string country;
    //int fieldingAction;
    static const string ground;//players playing in the same ground


public:
    Player(string name,int age,string country);
    void setName(string name);
    void setAge(int age);
    void setCountry(string country);

    string getName();
    int getAge();
    string getCountry();
    virtual string getFieldingAction();
    string getGround();

    Player();


};


#endif //PLAYERDIRECTORY_PLAYER_H
