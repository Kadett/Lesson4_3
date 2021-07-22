//
// Created by User on 022 22.07.21.
//

#include "Minivan.h"

Minivan::Minivan() {
    std::cout << "Minivan::Minivan()" << std::endl;
}

void Minivan::setCompany(std::string i_company) {
    company = i_company;
}

void Minivan::setModel(std::string i_model) {
    model = i_model;
}
