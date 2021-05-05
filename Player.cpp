#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{
    Player::Player(Board board, City city){};
    Player& Player::fly_charter(City city){return *this;}
    Player& Player::drive(City city){return *this;}
    Player& Player::fly_direct(City city){return *this;}
    Player& Player::fly_shuttle(City city){return *this;}
    Player& Player::treat(City city){return *this;}
    Player& Player::take_card(City city){return *this;}
    std::string Player::role(){string s="hi";return s;}
    void Player::discover_cure(Color color){} 
    void Player::build(){}
};