#include "Card.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include "Player.hpp"

int main() {
    /*     const Card c1 { 8, "Pique" };
        c1.print();
        const Card c2 { 8, "Carreau" };
        std::cout << (c2 == c1) << std::endl; // -> 1
        const Card c3 { 10, "Carreau" };
        std::cout << (c2 == c3) << std::endl; // -> 0

        std::cout << (c1 < c2) << std::endl; // -> 0
        std::cout << (c1 < c3) << std::endl; // -> 1
        std::cout << (c3 < c1) << std::endl; // -> 0 */

    Player p1{ "vivi" };
    Player p2{ "nemnem" };

    Player::deal_all_cards(p1, p2);

    // auto step = 0;
    // for (auto i = 0; i < 16; ++i)
    // {
    //     std::cout << p1[i] << std::endl;
    //     std::cout << p2[i] << std::endl;
    // }

    while (!Player::play(p1, p2)) {
        // playing
    }

    std::cout << "Score de vivi " << p1.get_score() << std::endl;
    std::cout << "Score de nemnem " << p2.get_score() << std::endl;

    return 0;
}