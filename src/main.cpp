#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "GoogleHashCode.hpp"

#include <boost/regex.hpp>

int main(int argc, const char * argv[])
{
	std::string input;
	std::cin >> input;

    GoogleHashCode init;
    init.GoogleHashCodeInit();

    std::cout << input;


    return 0;
}
