  
#include "City.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{
    Board::Board(){}
    int& Board::operator[](City city){return this->des_lvl;}
    bool Board::is_clean(){return false;}
    std::ostream& operator<<(std::ostream& os, const Board & board){
        return (os<<"hi"<<endl);
    }
    void Board::remove_cures (){}
};