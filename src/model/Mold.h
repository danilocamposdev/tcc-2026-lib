#pragma once
#include <string>
#include <optional>

class Mold {
	private:
		std::optional<int> id_;
		std::string type_;
		int available_quantity_;

	public:
		Mold(std::string type, int available_quantity):
			type_ {type}, available_quantity_ {available_quantity} {};

		std::optional<int> id() const { return id_; }
		void setId(int id) { id_ = id; }
		bool isPersisted() const { return id_.has_value(); }
		std::string type() const {return type_;}
		int available_quantity() const {return available_quantity_;}
};
