#ifndef SHOP_H
#define SHOP_H

#include <string>
#include <vector>
#include <optional>

struct Product {
    std::string name;
    double price;
};

class Shop {
public:
    void addProduct(const std::string& name, double price);
    std::vector<Product> getProducts() const;
    std::optional<double> searchProduct(const std::string& name) const;

private:
    std::vector<Product> products;
};

#endif // SHOP_H
