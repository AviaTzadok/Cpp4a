#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic {
    class Player {
        public:
            City city;
            Player(Board board, City city);
            Player& drive(City city);
            Player& fly_charter(City city);
            Player& fly_direct(City city);
            Player& fly_shuttle(City city);
            Player& treat(City city);
            Player& take_card(City city); 
            std::string role(); 
            void discover_cure(Color color); 
            void build();
    };
};