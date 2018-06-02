#ifndef HW4_GAME_H
#define HW4_GAME_H

#include "Weapon.h"
#include "Player.h"

enum GameStatus{
 NAME_ALREADY_EXSISTS,
    GAME_FULL,
    SUCCESS,
    NAME_DOES_NOT_EXIST,
    INVALID_PARAM,
    FIGHT_FAILED
};


class Game {
    int maxPlayer;
    Player** array_player;
    int last_player_in_the_array;


public:
/**
 * the functuin create a new classe game
 * @param maxPlayer
 */
    Game(int maxPlayer);
/**
 * the function delete the Game(free him)
 */
    ~Game();

    /**
     * the metoda get name of a player, and increase his level
     * @param playerName- the name of the player
     * @return- if the player does not exist return - NAME_DOES_NOT_EXIST
     */
    GameStatus nextLevel(const char *playerName);

};

#endif //HW4_GAME_H
