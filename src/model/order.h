#pragma once
#include "mold.h"
#include "date.h"

class Order {
private:
    int id_;
    Date delivery_date_;
    const Mold* mold_;
    bool is_firm_;
    int weight_;

public:
    Order(int id, Date delivery_date, const Mold* mold, bool is_firm, int weight)
        : id_{id}, delivery_date_{delivery_date}, mold_{mold},
          is_firm_{is_firm}, weight_{weight} {}

    int id() const { return id_; }
    Date delivery_date() const { return delivery_date_; }
    const Mold* mold() const { return mold_; }
    bool is_firm() const { return is_firm_; }
    double weight() const { return weight_; }
};
