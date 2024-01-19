#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"

int main() {
    /*  Person p;

     p.first_name = "Palluche";
     p.surname = "La Faluche";

     std::cout << "La personne s'appelle " << p.first_name << " " << p.surname << std::endl;
  */

  /* Person p { "Virginie", "LY" };

  std::cout << "La personne s'appelle " << p.get_firstname() << " " << p.get_surname() << std::endl;
  return 0; */

    int nbPersons;
    std::cout << "Nombre de personnes: ";
    std::cin >> nbPersons;

    // on déclare un vecteur pour stocker les noms et prenoms des personnes
    auto vecP = std::vector<Person>{};
    std::string firstname;
    std::string surname;
    for (auto i = 0; i < nbPersons; i++) {
        std::cout << "Prenom: ";
        std::cin >> firstname;

        std::cout << "Nom: ";
        std::cin >> surname;

        Person p{ firstname, surname };
        vecP.emplace_back(p);
    }

    std::cout << "Les personnes sont ";
    for (auto i = 0; i < nbPersons; i++) {
        std::cout << vecP[i].get_firstname() << " " << vecP[i].get_surname();
        if (i != nbPersons - 1) {
            std::cout << ", ";
        } else {
            std::cout << ".";
        }
    }

    std::cout << std::endl;
    return 0;
}