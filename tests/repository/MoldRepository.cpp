#include "../../src/repository/MoldRepository.h"

void MoldRepository::add(Mold mold) { molds_.push_back(std::move(mold)); }

const Mold* MoldRepository::get_by_id(int id) const {
	for (const Mold& m : molds_) {
		if (m.id() == id)
			return &m;
	}
	return nullptr;
}

const std::vector<Mold>& MoldRepository::all() const { return molds_; }
