#pragma once
#include <vector>
#include "../model/Order.h"

class OrderRepository {
	private:
		std::vector<Order> orders_;
	public:
		void add(Order order);

		const Order* get_by_id(int id) const;
		const std::vector<Order>& all() const;
};
