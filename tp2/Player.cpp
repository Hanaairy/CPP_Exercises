#include "Player.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <random>

Player::Player(std::string name) :
    _name{ name } {
};

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