//
// Created by Jonathas Wilbur on 12/29/2023.
//

#include <utility>

#include "entities/ShippingDetails.h"

namespace ECommerceSystem::Entities {

        ShippingDetails::ShippingDetails(int shippingID, int orderID, std::string  address, std::string  deliveryStatus)
                : shippingID(shippingID), orderID(orderID), address(std::move(address)), deliveryStatus(std::move(deliveryStatus)) {}

        int ShippingDetails::getShippingID() const {
            return shippingID;
        }

        void ShippingDetails::setShippingID(int newShippingID) {
            shippingID = newShippingID;
        }

        int ShippingDetails::getOrderID() const {
            return orderID;
        }

        void ShippingDetails::setOrderID(int newOrderID) {
            orderID = newOrderID;
        }

        std::string ShippingDetails::getAddress() const {
            return address;
        }

        void ShippingDetails::setAddress(const std::string& newAddress) {
            address = newAddress;
        }

        std::string ShippingDetails::getDeliveryStatus() const {
            return deliveryStatus;
        }

        void ShippingDetails::setDeliveryStatus(const std::string& newDeliveryStatus) {
            deliveryStatus = newDeliveryStatus;
        }

} // namespace ECommerceSystem::Entities