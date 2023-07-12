#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CPROJ_EXPORT __declspec(dllexport)
#else
  #define CPROJ_EXPORT
#endif

CPROJ_EXPORT void cproj();
CPROJ_EXPORT void cproj_print_vector(const std::vector<std::string> &strings);
