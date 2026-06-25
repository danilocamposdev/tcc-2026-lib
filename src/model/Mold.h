#pragma once
#include <string>

class Mold {
	private:
	int id_;
    std::string type_;
    int available_quantity_;

	public:
	Mold(int id, std::string type, int available_quantity):
		id_{id}, type_ {type}, available_quantity_ {available_quantity} {};

	int id() const {return id_;}
	std::string type() const {return type_;}
	int available_quantity() const {return available_quantity_;}
};
