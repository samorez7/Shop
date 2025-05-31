#include "Shop.h"

void Shop::addProduct(const std::string& name, double price) {
    products.push_back({ name, price });
}

std::vector<Product> Shop::getProducts() const {
    return products;
}

std::optional<double> Shop::searchProduct(const std::string& name) const {
    for (const auto& product : products) {
        if (product.name == name) {
            return product.price;
        }
    }
    return std::nullopt;
}
