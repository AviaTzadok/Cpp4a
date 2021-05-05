#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
TEST_CASE("Working Test:"){
    cout << boolalpha;
	Board board;
    Player player1(board, City::Lagos);
    OperationsExpert player2(board, City::Chicago);
    CHECK(board.is_clean());
    board[City::Miami] = 2;
    CHECK(!board.is_clean());
    board[City::Miami] = 0;
    CHECK(board.is_clean());
    CHECK_THROWS(player1.drive(City::Algiers));
    CHECK_THROWS(player1.fly_direct(City::Algiers));
    CHECK_THROWS(player1.fly_charter(City::Algiers));
    CHECK_THROWS(player1.fly_shuttle(City::Algiers));
    player1.take_card(City::Madrid);
	player1.take_card(City::Montreal);
	player1.take_card(City::Essen);
	player1.take_card(City::Milan);
	player1.take_card(City::Delhi);

    CHECK_NOTHROW(player1.fly_direct(City::Delhi));
    CHECK_NOTHROW(player1.fly_direct(City::Madrid));
    CHECK_NOTHROW(player1.fly_direct(City::Montreal));
    CHECK_NOTHROW(player1.fly_direct(City::Essen));
    CHECK_NOTHROW(player1.fly_direct(City::Milan));

    CHECK_NOTHROW(player1.drive(City::Khartoum));
    CHECK_NOTHROW(player2.drive(City::Atlanta));
    CHECK_NOTHROW(player2.drive(City::Montreal));
    CHECK_NOTHROW(player2.build());

    Dispatcher player3(board,City::Delhi);
    CHECK_NOTHROW(player3.fly_direct(City::HongKong));
    Researcher player4(board,City::Taipei);
    CHECK_THROWS(player4.discover_cure(Color::Red));
    board[City::HongKong]=1;
    CHECK_NOTHROW(player4.discover_cure(Color::Red));
    CHECK_EQ(player3.role(),"Dispatcher");
    CHECK_EQ(player4.role(),"Researcher");
}