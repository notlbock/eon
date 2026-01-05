#ifndef VERSION_HPP
#define VERSION_HPP

#include <iostream>
#include <fstream>
#include <string>

inline void printVersion() {
  std::string versionPath = "../../config/VERSION";
  std::ifstream file(versionPath);

  if (!file.is_open())
  {
    std::cerr << "An error happened while printing the current version.";
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::cout << line << "\n";
  }
}

#endif
