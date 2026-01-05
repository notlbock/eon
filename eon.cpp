// /usr/local/bin/eon

#include <iostream>
#include </opt/Eon/frameworks/version.hpp>

int main(int argc, char* argv[])
{
  if (argc > 2)
  {
    const char* arg1 = argv[1];
    if (arg1 == "--version")
    {
      printVersion();
    }
  }
  else
  {
    std::cout << "No input files";
  }
}
