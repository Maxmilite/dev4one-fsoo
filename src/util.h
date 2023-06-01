#ifndef __UTILITY_H
#define __UTILITY_H

#include <cstdio>
#include <cstdlib>
#include <iostream>

namespace util {
    void printUsage() {
        std::cerr << "Usage: ./<Program name> <Input name> <Output name>" << std::endl;
        exit(-1);
    }
    void callException(std::string message) {
        std::cerr << "[ERROR] " << message << std::endl;
        exit(-1);
    }
}

#endif