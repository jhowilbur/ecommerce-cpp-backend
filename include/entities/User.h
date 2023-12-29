//
// Created by Jonathas Wilbur on 12/29/2023.
//

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Poco/UUID.h"
#include "Order.h"

class User {
private:
    Poco::UUID userId;
    std::string name;
    std::string phone;
    std::string email;
    std::string password;
    std::vector<Order> orders;

public:
    User(std::string name, std::string phone, std::string email, std::string password);

    Poco::UUID getUserId() const;
    void setUserId(const Poco::UUID& userId);

    std::string getName() const;
    void setName(const std::string& name);

    std::string getPhone() const;
    void setPhone(const std::string& phone);

    std::string getEmail() const;
    void setEmail(const std::string& email);

    std::string getPassword() const;
    void setPassword(const std::string& password);

    const std::vector<Order>& getOrders() const;
    void removeOrder(const Order& order);
    void placeOrder(const Order& order);
};

#endif //USER_H