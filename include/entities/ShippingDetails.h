//
// Created by Jonathas Wilbur on 12/29/2023.
//

// include/entities/ShippingDetails.h
#ifndef SHIPPINGDETAILS_H
#define SHIPPINGDETAILS_H

#include <string>


namespace ECommerceSystem::Entities {

    class ShippingDetails {
    private:
        int shippingID;
        int orderID;
        std::string address;
        std::string deliveryStatus;

    public:
        ShippingDetails(int shippingID, int orderID, std::string  address, std::string  deliveryStatus);

        int getShippingID() const;
        void setShippingID(int shippingID);

        int getOrderID() const;
        void setOrderID(int orderID);

        std::string getAddress() const;
        void setAddress(const std::string& address);

        std::string getDeliveryStatus() const;
        void setDeliveryStatus(const std::string& deliveryStatus);
    };

} // namespace ECommerceSystem::Entities


#endif // SHIPPINGDETAILS_H
