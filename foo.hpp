#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector<char> foo(std::list<Human>& people) {
    std::vector<char> result;

    // Iterujemy po liście osób
    for (auto& person : people) {
        // Zwiększamy wiek każdej osoby
        person.birthday();

        // Sprawdzamy, czy osoba jest "potworem" (nie lubi psów ani kotów)
        result.push_back(person.isMonster() ? 'n' : 'y');
    }

    // Odwracamy kolejność w wyniku ręcznie
    std::vector<char> reversed_result;
    for (int i = result.size() - 1; i >= 0; --i) {
        reversed_result.push_back(result[i]);
    }

    return reversed_result;
}
