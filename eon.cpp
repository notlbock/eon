#include <iostream>
#include <cstring>
#include </opt/Eon/frameworks/version.hpp>
#include </opt/Eon/frameworks/docs.hpp>

int main(int argc, char* argv[])
{
    if (argc >= 2)
    {
        if (std::strcmp(argv[1], "--version") == 0)
        {
            printVersion();
            return 0;
        }
        else if (std::strcmp(argv[1], "--doc") == 0)
        {
            if (argc >= 3)
            {
                handleDoc(std::string(argv[2]));
                return 0;
            }
            else
            {
                std::cerr << "No docs.\n";
                return 1;
            }
        }
        else
        {
            std::cout << "Unknown argument: " << argv[1] << '\n';
            return 1;
        }
    }

    std::cout << "No input files\n";
    return 0;
}

