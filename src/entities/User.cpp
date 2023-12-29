//
// Created by Jonathas Wilbur on 12/29/2023.
//

#include "Poco/UUID.h"
#include "entities/User.h"
#include "Poco/UUIDGenerator.h"
#include <algorithm>

User::User(std::string name, std::string phone, std::string email, std::string password)
        : name(std::move(name)), phone(std::move(phone)), email(std::move(email)), password(std::move(password)) {
    this->userId = Poco::UUIDGenerator::defaultGenerator().createOne();
}

Poco::UUID User::getUserId() const {
    return userId;
}

std::string User::getName() const {
    return name;
}

std::string User::getPhone() const {
    return phone;
}

std::string User::getEmail() const {
    return email;
}

std::string User::getPassword() const {
    return password;
}

void User::setUserId(const Poco::UUID& newUserId) {
    userId = newUserId;
}

void User::setName(const std::string& newName) {
    name = newName;
}

void User::setPhone(const std::string& newPhone) {
    phone = newPhone;
}

void User::setEmail(const std::string& newEmail) {
    email = newEmail;
}

void User::setPassword(const std::string& newPassword) {
    password = newPassword;
}

const std::vector<Order>& User::getOrders() const {
    return orders;
}

void User::placeOrder(const Order& order) {
    orders.push_back(order);
}

void User::removeOrder(const Order& order) {
    auto it = std::find(orders.begin(), orders.end(), order);
    if (it != orders.end()) {
        orders.erase(it);
    }
}
