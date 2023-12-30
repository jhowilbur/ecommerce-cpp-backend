//
// Created by Jonathas Wilbur on 12/29/2023.
//

#include "entities/Payment.h"

namespace ECommerceSystem::Entities {

        Payment::Payment(double amount, const std::time_t &paymentDate) : amount(amount), paymentDate(paymentDate) {}

        double Payment::getAmount() const {
            return amount;
        }

        void Payment::setAmount(double newAmount) {
            amount = newAmount;
        }

        std::time_t Payment::getPaymentDate() const {
            return paymentDate;
        }

        void Payment::setPaymentDate(const std::time_t &newPaymentDate) {
            paymentDate = newPaymentDate;
        }

} // namespace ECommerceSystem::Entities
