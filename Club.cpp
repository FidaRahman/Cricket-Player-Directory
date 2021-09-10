//
// Created by Fida Rahman on 4/22/21.
//

#include "Club.h"
#include <string>
#include <iostream>
//#include <typeinfo>
//#include <typeindex>
//#include "Enum.h"

using namespace std;

Club::Club(string name) {
    this->name=name;
}

string Club::getClubName() {
    return this->name;
}

vector<Batsman> Club::getBatsmanList() {
    return this->batsmanList;
}
vector<Bowler> Club::getBowlerList() {
    return this-> bowlerList;
}
vector<Wicketkeeper> Club::getWkList() {
    return this->wicketKeeperList;
}


void Club::print_batsmanList() {
    for (int i = 0; i <batsmanList.size() ; ++i) {
        cout << "BATSMAN NUMBER: " << i+1 << endl;
        getBatsmanInfo(batsmanList.at(i)); //friend
        cout << "----------------------------------------------------------------" << endl<<endl;

    }
}
void Club::print_bowlerList() {
    for (int i = 0; i <bowlerList.size() ; ++i) {
        cout << "BOWLER NUMBER: " << i+1 << endl;
        cout << "Name: " << bowlerList.at(i).getName() << endl;
        cout << "Age: " << bowlerList.at(i).getAge() << endl;
        cout << "Country: " << bowlerList.at(i).getCountry() << endl;
        cout << "Bowling hand: " << bowlerList.at(i).getBowlingHand() << endl;
        cout << "Bowler type: " << bowlerList.at(i).getType() << endl;
        cout << "Favorite delivery: " << bowlerList.at(i).getFavoriteDelivery() << endl;
        cout << "----------------------------------------------------------------" << endl<<endl;
    }

}
void Club::print_wkList() {
    for (int i = 0; i <wicketKeeperList.size() ; ++i) {
        cout << "WICKETKEEPER NUMBER: " << i+1 << endl;
        cout << "Name: " << wicketKeeperList.at(i).getName() << endl;
        cout << "Age: " << wicketKeeperList.at(i).getAge() << endl;
        cout << "Country: " << wicketKeeperList.at(i).getCountry() << endl;
        cout << "Batting hand: " << wicketKeeperList.at(i).getBattingHand() << endl;
        cout << "Bat brand: " << wicketKeeperList.at(i).getBatBrand() << endl;
        cout << "Favorite shot: " << wicketKeeperList.at(i).getFavoriteShot() << endl;
        cout << "Gloves brand: " << wicketKeeperList.at(i).getGlovesBrand() << endl;
        cout << "Keeping action: " << wicketKeeperList.at(i).getKeepingAction() << endl;
        cout << "Fielding action: " << wicketKeeperList.at(i).getFieldingAction() << endl;
        cout << "----------------------------------------------------------------" << endl<<endl;


    }
}

void Club::operator+=(Batsman* newBatsman) {
    this->batsmanList.push_back(*newBatsman);
}

void Club::operator+=(Bowler* newBowler) {
    this->bowlerList.push_back(*newBowler);
}

void Club::operator+=(Wicketkeeper* newWk) {
    this->wicketKeeperList.push_back(*newWk);
}






