#include "pch.h"
#include "cExplicitTest.h"

cExplicitTest::cExplicitTest(const char * name) : _name(name)
{
}

std::string cExplicitTest::GetName()
{
	return _name;
}

cUseExplicitClass::cUseExplicitClass(cExplicitTest test)
{
	std::cout << test.GetName().c_str() << std::endl;

}
