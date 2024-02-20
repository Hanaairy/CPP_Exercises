#include <memory>
#include <vector>

struct Product
{};

struct Client
{
    std::vector<Product> products;
};

int main() {
    auto client = Client{};

    client.products.push_back(Product{});
    client.products.push_back(Product{});

    auto& first_product = client.products.front();
    // <-- on est ici
    client.products.push_back(Product{});
    return 0;
}