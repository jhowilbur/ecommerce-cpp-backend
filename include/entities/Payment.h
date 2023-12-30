//
// Created by Jonathas Wilbur on 12/29/2023.
//

#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include <ctime>

namespace ECommerceSystem::Entities {

        class Payment {
        private:
            double amount;
            std::time_t paymentDate;

        public:
            Payment(double amount, const std::time_t& paymentDate);

            // Getter and Setter methods
            double getAmount() const;
            void setAmount(double amount);

            std::time_t getPaymentDate() const;
            void setPaymentDate(const std::time_t& paymentDate);
        };

} // namespace ECommerceSystem::Entities


#endif // PAYMENT_H
