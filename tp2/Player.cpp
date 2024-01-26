#include "Player.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <iostream>

Player::Player(std::string name) :
    _name{ name } {
};

bool Player::play(Player& p1, Player& p2) {
    std::cout << "Joueur 1 : " << p1[_round] << std::endl;
    std::cout << "Joueur 2 : " << p2[_round] << std::endl;

    if (p1[_round] < p2[_round]) {
        p2._score++;
    } else if (p2[_round] < p1[_round]) {
        p1._score++;
    }
    _round++;

    return _round >= p1._cards.size();
}
void Player::deal_all_cards(Player& p1, Player& p2) {
    std::vector<Card> all_cards;
    for (unsigned int value = 7; value < 15; value++) {
        for (auto color : { "Pique", "Trefle", "Coeur", "Carreau" }) {
            all_cards.emplace_back(Card(value, color));
        }
    }
    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

    /* auto half = all_cards.begin() + all_cards.size() / 2;
    std::vector<Card> firstHalf(all_cards.begin(), half);
    std::vector<Card> secondHalf(half, all_cards.end()); */

    for (int i = 0; i < all_cards.size(); i++) {
        if (i % 2 == 0) {
            p1._cards.emplace_back(all_cards[i]);
        } else {
            p2._cards.emplace_back(all_cards[i]);
        }
    }
}

Card Player::operator[](int index) const {
    return _cards[index];
}