#pragma once
#include <string>

class Priority {
public:
    static int value(int index) {
        switch (index) {
            case 1:  return 100;
            case 2:  return 500;
            default: return 1000;
        }
    }

    static std::string text(int index) {
        switch (index) {
            case 1:  return "Baixa";
            case 2:  return "Média";
            default: return "Alta";
        }
    }

    Priority() = delete;
};
