#pragma once
#include <vector>
#include "../model/Mold.h"

class MoldRepository {
private:
    std::vector<Mold> molds_;
public:
    void add(Mold mold);

	const Mold* get_by_id(int id) const;

    const std::vector<Mold>& all() const;
};
