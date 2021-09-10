//
// Created by Fida Rahman on 4/22/21.
//

#ifndef PLAYERDIRECTORY_CLUB_H
#define PLAYERDIRECTORY_CLUB_H
#include <string>
#include <iostream>
#include <vector>
#include "Player.h"
#include "Batsman.h"
#include "Bowler.h"
#include "Wicketkeeper.h"


using namespace std;


class Club {

private:
    vector<Batsman> batsmanList;
    vector<Bowler> bowlerList;
    vector<Wicketkeeper> wicketKeeperList;

    string name;

public:
    Club(string name);
    vector<Batsman> getBatsmanList();
    vector<Bowler> getBowlerList();
    vector<Wicketkeeper> getWkList();

    void operator += (Batsman* newBatsman);
    void operator += (Bowler* newBowler);
    void operator += (Wicketkeeper* newWk);

    string getClubName();
    void print_batsmanList();
    void print_bowlerList();
    void print_wkList();
};


#endif //PLAYERDIRECTORY_CLUB_H
