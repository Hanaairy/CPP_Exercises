#include <string>

class Person
{
    public:
    Person(std::string firstname, std::string surname);

    std::string get_surname();
    std::string get_firstname();

    private:
    std::string first_name;
    std::string surname;
};