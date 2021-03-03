//
// Created by Jim Marsden on 3/3/21.
//

#include "shared.hpp"

#include <iostream>

DYNALO_EXPORT void DYNALO_CALL on_connect(std::string const & path, std::string const & foreign_ip){
    //This is an example.
    std::cout << "ip: " << foreign_ip << " has connected to: " << path << '\n';
}