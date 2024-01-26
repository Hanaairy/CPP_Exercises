#pragma once
#include <string>
#include <vector>
#include "Card.hpp"

class Player {
    public:
    Player(std::string name);

    unsigned int get_score() const { return _score; };
    static void deal_all_cards(Player& p1, Player& p2);
    Card operator[](int index) const;
    static bool play(Player& p1, Player& p2);

    private:
    std::string _name;
    std::vector<Card> _cards; // par défaut un conteneur vide
    unsigned int _score = 0; // par défaut 0
    static inline int _round = 0;

};