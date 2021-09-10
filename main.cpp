#include <iostream>
#include "Player.h"
#include "Batsman.h"
#include "Bowler.h"
#include "Wicketkeeper.h"
#include "Club.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;
void savePlayers(Club club);
int main() {

    cout << "Welcome to the Player Directory!" << endl;

    cout << "Today 's match will be played on the Ground: " << Player().getGround() <<endl;
    Club club("Fida's Cricket Club");

    cout<< "Our club's name is: "<<club.getClubName()<<endl<<endl;
    cout<<"-------------------------------------------------------------"<<endl<<endl;
    cout << "Please enter the players." << endl;

    //For batsman
    Batsman* newBatsman;
    int batsmanCount;

    cout << "How many batsman will be be playing today: ";
    cin >> batsmanCount;

    for (int i=0; i < batsmanCount ; ++i) {
        string userName;
        newBatsman= new Batsman;
        string battingHand, batBrand, favoriteShot,country;
        int age;

        cout << "Batsman name: " << endl;
        cin >> userName;

        cout << "Batsman age: " << endl;
        cin >> age;

        cout << "Batsman country: " << endl;
        cin >> country;

        cout<<"Enter the batting hand: "<<endl;
        cin>> battingHand;

        cout<<"Enter the bat brand: "<<endl;
        cin>> batBrand;

        cout<< "Enter the favorite shot: "<<endl;
        cin>>favoriteShot;

        cout <<endl<< "----------------------------------------------------------------" << endl<<endl;

        newBatsman->setName(userName);
        newBatsman->setAge(age);
        newBatsman->setCountry(country);
        newBatsman->setBattingHand(battingHand);
        newBatsman->setBatBrand(batBrand);
        newBatsman->setFavoriteShot(favoriteShot);

        club+=newBatsman;

    }

    //club.print_batsmanList();

    //For Bowlers
    Bowler* newBowler;
    int bowlerCount;

    cout << "How many bowler will be be playing today: ";
    cin >> bowlerCount;


    for (int i=0; i < bowlerCount ; ++i) {
        string userName;
        newBowler= new Bowler;
        string bowlingHand, type, favoriteDelivery,country;
        int age;

        cout << "Bowler name: " << endl;
        cin >> userName;

        cout << "Bowler age: " << endl;
        cin >> age;

        cout << "Bowler country: " << endl;
        cin >> country;

        cout<<"Enter the bowling hand: "<<endl;
        cin>> bowlingHand;

        cout<<"Enter the type of bowler: "<<endl;
        cin>> type;

        cout<< "Enter the favorite delivery: "<<endl;
        cin>>favoriteDelivery;

        cout <<endl<< "----------------------------------------------------------------" << endl<<endl;
        newBowler->setName(userName);
        newBowler->setAge(age);
        newBowler->setCountry(country);
        newBowler->setBowlingHand(bowlingHand);
        newBowler->setType(type);
        newBowler->setFavoriteDelivery(favoriteDelivery);

        club+=newBowler;

    }

    //For wicketkeeper
    Wicketkeeper* newWicketkeeper;
    int wkCount;

    cout << "How many wicketkeeper will be be playing today: ";
    cin >> wkCount;

    for (int i=0; i < wkCount ; ++i) {
        string userName;
        newWicketkeeper = new Wicketkeeper;

        string battingHand, batBrand, favoriteShot,country,keepingHand,glovesBrand;
        int age,keepingAction;

        cout << "Wicketkeeper name: " << endl;
        cin >> userName;

        cout << "Wicketkeeper age: " << endl;
        cin >> age;

        cout << "Wicketkeeper country: " << endl;
        cin >> country;

        cout<<"Enter the batting hand: "<<endl;
        cin>> battingHand;

        cout<<"Enter the bat brand: "<<endl;
        cin>> batBrand;

        cout<< "Enter the favorite shot: "<<endl;
        cin>>favoriteShot;


        cout<<"Enter the Wicketkeeper gloves brand: "<<endl;
        cin>>glovesBrand;

        cout<<"Enter the strength(keeping action) of the wicketkeeper: "<<endl;
        cin>>keepingAction;
        cout <<endl<< "----------------------------------------------------------------" << endl<<endl;




        newWicketkeeper->setName(userName);
        newWicketkeeper->setAge(age);
        newWicketkeeper->setCountry(country);
        newWicketkeeper->setBattingHand(battingHand);
        newWicketkeeper->setBatBrand(batBrand);
        newWicketkeeper->setFavoriteShot(favoriteShot);
        newWicketkeeper->setGlovesBrand(glovesBrand);
        newWicketkeeper->setKeepingAction(keepingAction);

        club+=newWicketkeeper;

    }



    club.print_batsmanList();
    club.print_bowlerList();
    club.print_wkList();

    cout <<"Your players are saved in an output file called Players.txt. Thank you."<<endl;
    savePlayers(club);

    return 0;
}

void savePlayers(Club club){
    ofstream output;
    output.open("Players.txt");
    if(!output) {
        cerr << "error couldn't open file" << endl;
        exit(1);

    }

    for (int i = 0; i <club.getBatsmanList().size() ; ++i) {
        output<< "BATSMAN NUMBER: " << i+1 << endl;
        output << "Name: " << club.getBatsmanList().at(i).getName() << endl;
        output << "Age: " << club.getBatsmanList().at(i).getAge() << endl ;
        output << "Country: " << club.getBatsmanList().at(i).getCountry() << endl ;
        output << "Batting Hand: " << club.getBatsmanList().at(i).getBattingHand() << endl;
        output << "Favourite Shot: " << club.getBatsmanList().at(i).getFavoriteShot() << endl;
        output << "Bat brand: " << club.getBatsmanList().at(i).getBatBrand() << endl;
        output << "Fielding action: " << club.getBatsmanList().at(i).getFieldingAction() << endl;

        output << "----------------------------------------------------------------" << endl<<endl;

    }
    for (int i = 0; i <club.getBowlerList().size() ; ++i) {
        output << "BOWLER NUMBER: " << i+1 << endl;
        output << "Name: " << club.getBowlerList().at(i).getName() << endl;
        output << "Age: " << club.getBowlerList().at(i).getAge() << endl;
        output << "Country: " << club.getBowlerList().at(i).getCountry() << endl;
        output << "Bowling hand: " << club.getBowlerList().at(i).getBowlingHand() << endl;
        output << "Bowler type: " << club.getBowlerList().at(i).getType() << endl;
        output << "Favorite delivery: " << club.getBowlerList().at(i).getFavoriteDelivery() << endl;
        output << "----------------------------------------------------------------" << endl<<endl;
    }

    for (int i = 0; i <club.getWkList().size() ; ++i) {
        output << "WICKETKEEPER NUMBER: " << i+1 << endl;
        output << "Name: " << club.getWkList().at(i).getName() << endl;
        output << "Age: " << club.getWkList().at(i).getAge() << endl;
        output << "Country: " << club.getWkList().at(i).getCountry() << endl;
        output << "Batting hand: " << club.getWkList().at(i).getBattingHand() << endl;
        output << "Bat brand: " << club.getWkList().at(i).getBatBrand() << endl;
        output << "Favorite shot: " << club.getWkList().at(i).getFavoriteShot() << endl;
        output << "Gloves brand: " << club.getWkList().at(i).getGlovesBrand() << endl;
        output << "Keeping action: " << club.getWkList().at(i).getKeepingAction() << endl;
        output << "Fielding action: " << club.getWkList().at(i).getFieldingAction() << endl;
        output << "----------------------------------------------------------------" << endl<<endl;


    }
}

