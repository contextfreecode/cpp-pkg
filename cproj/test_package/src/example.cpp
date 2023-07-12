#include "cproj.h"
#include <vector>
#include <string>

int main() {
    cproj();
    
    std::vector<std::string> vec;
    vec.push_back("test_package");

    cproj_print_vector(vec);
}
