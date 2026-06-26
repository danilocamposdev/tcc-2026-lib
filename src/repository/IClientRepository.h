#pragma once
#include "../model/Client.h"
#include <vector>
#include <optional>

class IClientRepository {
public:
    virtual Client save(Client client) = 0;
    virtual std::optional<Client> get_by_id(int id) const = 0;
    virtual std::vector<Client> all() const = 0;
    virtual ~IClientRepository() = default;
};
