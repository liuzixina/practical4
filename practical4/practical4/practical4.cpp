#include <iostream>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	std::set<int>myset;
	printf("Please enter a group of number.Enter 0 to exit: \n");
	int number = 0;
	while (true)
	{
		scanf("%d", &number);
		if (number == 0)
		{
			break;
		}
		myset.insert(number);
	}
	printf("Please enter the number to find:\n");
	scanf("%d", &number);
	if (myset.count(number))
		printf("%d In the group！\n", number);
	else
		printf("%d Not in the group！\n", number);
	printf("Please enter the number you want to delete: \n");
	int deleted;
	scanf("%d", &deleted);
	if (myset.count(deleted))
	{
		myset.erase(deleted);
		printf("Deleted completed！\n");
	}
	else
		printf("%d Not in the group！\n", number);
	std::map<int, std::string>mymap;
	for (auto it = myset.begin(); it != myset.end(); ++it) {
		printf("Please %d match a string: ", *it);
		std::string str;
		str.resize(100);
		scanf("%s", str.c_str());
		mymap.insert(std::pair<int, std::string>(*it, str));
	}
	for (auto it = mymap.begin(); it != mymap.end(); ++it)
	{
		printf("%d %s\n", it->first, it->second.c_str());
	}
	printf("Please enter a string as the key:");
	while (1)
	{
		scanf("%d", &number);
		auto it = mymap.find(number);
		if (it == mymap.end())
			printf("Not exist！Please enter again\n");
		else
		{
			printf("%s\n", it->second.c_str());
			break;
		}
	}
}
