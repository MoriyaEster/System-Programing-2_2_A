#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>

TEST_CASE("Creating players with their names") {
    Player p1("Alice");
    Player p2("Bob");

    CHECK(p1.name == "Alice");
    CHECK(p2.name == "Bob");
}

TEST_CASE("A new game and one turn") {
    Player pp1 ("A");
    Player pp2 ("B");
    Player pp3 ("C");
    ariel::Game game(pp1,pp2);
    CHECK_THROWS(ariel::Game(pp1,pp3));
    CHECK_THROWS(ariel::Game(pp2,pp3));

    CHECK(pp1.isPlaying == true);
    CHECK(pp2.isPlaying == true);
    CHECK(pp3.isPlaying == false);
}

TEST_CASE("How many cards"){
    Player pp1 ("A");
    Player pp2 ("B");
    ariel::Game game(pp1,pp2);
    game.playTurn();
    CHECK(pp1.cardesTaken() == -1);
    CHECK(pp2.cardesTaken() == -1);
    CHECK(pp1.stacksize() == -1);
    CHECK(pp2.stacksize() == -1);

    game.playTurn();
    CHECK(pp1.cardesTaken() == -1);
    CHECK(pp2.cardesTaken() == -1);
    CHECK(pp1.stacksize() == -1);
    CHECK(pp2.stacksize() == -1);

    game.playTurn();
    CHECK(pp1.cardesTaken() == -1);
    CHECK(pp2.cardesTaken() == -1);
    CHECK(pp1.stacksize() == -1);
    CHECK(pp2.stacksize() == -1);

    game.playTurn();
    CHECK(pp1.cardesTaken() == -1);
    CHECK(pp2.cardesTaken() == -1);
    CHECK(pp1.stacksize() == -1);
    CHECK(pp2.stacksize() == -1);

    game.playAll();
    CHECK(pp1.cardesTaken() == -1);
    CHECK(pp2.cardesTaken() == -1);
    CHECK(pp1.stacksize() == -1);
    CHECK(pp2.stacksize() == -1);
}

