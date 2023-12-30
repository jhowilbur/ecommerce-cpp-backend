//
// Created by Jonathas Wilbur on 12/29/2023.
//

#ifndef ORDERITEM_H
#define ORDERITEM_H

namespace ECommerceSystem::Entities {

    class OrderItem {
        private:
            int orderItemID;
            int orderID;
            int productID;
            int quantity;

        public:
            OrderItem(int itemID, int orderID, int productID, int quantity);

            int getOrderItemID() const;
            void setOrderItemID(int itemID);

            int getOrderID() const;
            void setOrderID(int orderID);

            int getProductID() const;
            void setProductID(int productID);

            int getQuantity() const;
            void setQuantity(int quantity);

            bool operator==(const OrderItem& other) const {
                return this->orderItemID == other.orderItemID;  // Example comparison
            }
    };

} // namespace ECommerceSystem::Entities

#endif // ORDERITEM_H
