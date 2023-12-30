//
// Created by Jonathas Wilbur on 12/29/2023.
//

#include "entities/OrderItem.h"

namespace ECommerceSystem::Entities {

    OrderItem::OrderItem(int itemID, int ordID, int prodID, int qty)
            : orderItemID(itemID), orderID(ordID), productID(prodID), quantity(qty) {}

    int OrderItem::getOrderItemID() const {
        return orderItemID;
    }

    void OrderItem::setOrderItemID(int itemID) {
        orderItemID = itemID;
    }

    int OrderItem::getOrderID() const {
        return orderID;
    }

    void OrderItem::setOrderID(int ordID) {
        orderID = ordID;
    }

    int OrderItem::getProductID() const {
        return productID;
    }

    void OrderItem::setProductID(int prodID) {
        productID = prodID;
    }

    int OrderItem::getQuantity() const {
        return quantity;
    }

    void OrderItem::setQuantity(int qty) {
        quantity = qty;
    }

} // namespace ECommerceSystem::Entities