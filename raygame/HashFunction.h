#pragma once
#include <functional>
namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);

	//Hash function by Brain Kernighan and Dennis Richie
	unsigned int BKDRHash(const char* data, unsigned int length);

	//random hash
	unsigned int random(const char* data, unsigned int length);

	//helps access default hash function
	static HashFunc defaultHash = BKDRHash;
};

