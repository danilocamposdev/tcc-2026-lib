#pragma once
#include <vector>
#include "../model/order.h"

class OrderRepository {
private:
    std::vector<Order> orders_;
public:
    void add(Order order) { orders_.push_back(std::move(order)); }

	const Order* get_by_id(int id) const {
    	for (const Order& o : orders_) {
        	if (o.id() == id)
            	return &o;
   		}
    	return nullptr;
	}

    const std::vector<Order>& all() const { return orders_; }
};
