//
// Created by Jonathas Wilbur on 12/29/2023.
//

#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "OrderItem.h"
#include <ctime>
#include "Poco/UUID.h"
#include "Payment.h"
#include "ShippingDetails.h"

namespace ECommerceSystem::Entities {

    class Order {
    private:
        int orderID;
        Poco::UUID userID;
        std::time_t orderDate;
        std::string status;
        std::vector<OrderItem> orderItems;
        Payment payment;
        ShippingDetails shippingDetails;

    public:
        Order(int orderId, const Poco::UUID& userId, std::time_t orderDate, std::string status, const Payment& payment, ShippingDetails  shippingDetails);

        int getOrderID() const;
        void setOrderID(int orderId);

        Poco::UUID getUserID() const;
        void setUserID(const Poco::UUID& userId);

        std::time_t getOrderDate() const;
        void setOrderDate(std::time_t orderDate);

        std::string getStatus() const;
        void setStatus(const std::string &status);

        const std::vector<OrderItem>& getOrderItems() const;
        void addOrderItem(const OrderItem &item);
        void removeOrderItem(const OrderItem &item);

        void setPayment(const Payment &payment);
        Payment getPayment() const;

        void setShippingDetails(const ShippingDetails &details);
        ShippingDetails getShippingDetails() const;

        bool operator==(const Order& other) const {
            return orderID == other.orderID;
        }
    };

} // namespace ECommerceSystem::Entities

#endif // ORDER_H

