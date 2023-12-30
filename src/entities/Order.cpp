//
// Created by Jonathas Wilbur on 12/29/2023.
//

#include "entities/Order.h"
#include "Poco/UUID.h"
#include <algorithm>

namespace ECommerceSystem::Entities {

    Order::Order(int orderId, const Poco::UUID& userId, std::time_t orderDate, std::string status)
            : orderID(orderId), userID(userId), orderDate(orderDate), status(std::move(status)) {}

    int Order::getOrderID() const {
        return orderID;
    }

    void Order::setOrderID(int orderId) {
        orderID = orderId;
    }

    Poco::UUID Order::getUserID() const {
        return userID;
    }

    void Order::setUserID(const Poco::UUID& userId) {
        userID = userId;
    }

    std::time_t Order::getOrderDate() const {
        return orderDate;
    }

    void Order::setOrderDate(std::time_t orderDate) {
        this->orderDate = orderDate;
    }

    std::string Order::getStatus() const {
        return status;
    }

    void Order::setStatus(const std::string &status) {
        this->status = status;
    }

    const std::vector<OrderItem>& Order::getOrderItems() const {
        return orderItems;
    }

    void Order::addOrderItem(const OrderItem &item) {
        orderItems.push_back(item);
    }

    void Order::removeOrderItem(const OrderItem &item) {
        orderItems.erase(std::remove(orderItems.begin(), orderItems.end(), item), orderItems.end());
    }

    void Order::setPayment(const Payment &payment) {
        this->payment = payment;
    }

    Payment Order::getPayment() const {
        return payment;
    }

    void Order::setShippingDetails(const ShippingDetails &details) {
        this->shippingDetails = details;
    }

    ShippingDetails Order::getShippingDetails() const {
        return shippingDetails;
    }

} // namespace ECommerceSystem::Entities