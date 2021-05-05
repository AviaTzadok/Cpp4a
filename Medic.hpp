  
#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class Medic:public Player{
        public:
            Medic(Board board, City city);
        
    };
};