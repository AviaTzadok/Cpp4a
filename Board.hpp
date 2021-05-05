#pragma once
#include "City.hpp"
#include <iostream>
namespace pandemic {
    class Board {
        public:
            Board();
            int des_lvl;
            int& operator[](City city);
            bool is_clean(); 
            friend std::ostream& operator<< (std::ostream& os, const Board & board);
            void remove_cures ();
    };
};