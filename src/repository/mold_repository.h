#pragma once
#include <vector>
#include "../model/mold.h"

class MoldRepository {
private:
    std::vector<Mold> molds_;
public:
    void add(Mold mold) { molds_.push_back(std::move(mold)); }

	const Mold* get_by_id(int id) const {
    	for (const Mold& m : molds_) {
        	if (m.id() == id)
            	return &m;
   		}
    	return nullptr;
	}

    const std::vector<Mold>& all() const { return molds_; }
};
