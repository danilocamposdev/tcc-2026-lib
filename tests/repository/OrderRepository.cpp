#include "../../src/repository/OrderRepository.h"

void OrderRepository::add(Order order) { orders_.push_back(std::move(order)); }

const Order* OrderRepository::get_by_id(int id) const {
	for (const Order& o : orders_) {
		if (o.id() == id)
			return &o;
	}
	return nullptr;
}

const std::vector<Order>& OrderRepository::all() const { return orders_; }
