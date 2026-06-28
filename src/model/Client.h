#pragma once
#include <string>
#include <optional>

class Client {
	private:
		std::optional<int> id_;
		std::string name_;
	public:
		Client(std::string name)
			: name_{std::move(name)} {}

		std::optional<int> id() const { return id_; }
		void setId(int id) { id_ = id; }
		bool isPersisted() const { return id_.has_value(); }
		std::string name() const { return name_; }
		void setName(std::string name) { name_ = name;}
};
