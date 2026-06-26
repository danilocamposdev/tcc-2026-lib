#pragma once
#include "../model/Mold.h"
#include <vector>
#include <optional>

class IMoldRepository {
public:
    virtual void add(Mold mold) = 0;
    virtual std::optional<Mold> get_by_id(int id) const = 0;
    virtual std::vector<Mold> all() const = 0;
    virtual ~IMoldRepository() = default;
};
