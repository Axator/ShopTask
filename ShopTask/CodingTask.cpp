#include "ShopTest.h"
#include <iostream>

int main()
{
	ShopTest test;
	test.RunAllTests();

	PricingRules rules;
	ShopItem itemA(1, 50, 3, 130);
	ShopItem itemB(2, 30, 2, 45);
	ShopItem itemC(3, 20);
	ShopItem itemD(4, 15);
	ShopItem itemE(1, 15);
	rules.RemoveRule(itemA);
	rules.AddRule(itemA);
	rules.AddRule(itemB);
	rules.AddRule(itemC);
	rules.AddRule(itemD);
	//rules.RemoveRule(itemA);
	rules.AddRule(itemE);
	CheckOut co(rules);
	co.Scan(itemA);
	co.Void(itemB);
	co.Scan(itemA);
	std::cout << "Price so far: " << co.GetTotal() << std::endl;
	co.Scan(itemA);
	std::cout << "Price so far: " << co.GetTotal() << std::endl;
	co.Scan(itemA);
	co.Scan(itemA);
	co.Scan(itemB);
	std::cout << "Price so far: " << co.GetTotal() << std::endl;
	co.Scan(itemB);
	co.Scan(itemC);
	co.Scan(itemD);
	co.Scan(itemD);
	std::cout << "Price so far: " << co.GetTotal() << std::endl;
	getchar();
    return 0;
}