#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::cout << "Entre ton nom: ";

    std::string name = "";
    std::cin >> name;
    std::cout << "Bonjour " << name << "!" << std::endl;

    return 0;
}


/*
Q5) Si on marque un nom trop long, il le coupe à partir de la 20e lettre (le max de char qu'il peut contenir ici).
    Il faut remplacer par "std::string name" et enlever "std:setw(20)" qui spécifie la taille à prendre en entrée.
*/