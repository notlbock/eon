#ifndef DOCS_HPP
#define DOCS_HPP

#include <iostream>
#include <fstream>
#include <string>

inline void handleDoc(const std::string& doc)
{
    std::ifstream file("/opt/Eon/docs/" + doc);

    if (!file.is_open())
    {
        std::cerr << "Error while loading document." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << '\n';
    }
}

#endif // DOCS_HPP

