#pragma once
#include <iostream>

class cExplicitTest
{
private:
	std::string _name;
public:
	explicit cExplicitTest(const char* name);

	std::string GetName();
};

class cUseExplicitClass
{
public: 
	cUseExplicitClass(cExplicitTest test);
};

