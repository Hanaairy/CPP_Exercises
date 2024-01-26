#pragma once
#include <string>
#include <vector>
#include "Card.hpp"

class Player {
    public:
    Player(std::string name);

    static void deal_all_cards(Player& p1, Player& p2);

    Card operator[](int index) const;

    private:
    std::string _name;
    std::vector<Card> _cards; // par défaut un conteneur vide
    unsigned int _score = 0; // par défaut 0

};