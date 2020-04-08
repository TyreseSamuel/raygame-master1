#include "HashFunction.h"

namespace HashFunction {
	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) {
			hash += data[i];
		}

		return hash;
	}

	//Hash function
	unsigned int BKDRHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	//random function hash
	unsigned int random(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313662458767 / 567) + data[i];

			//hash equals hash divided by 34 plus 69
			hash = (hash / 34) + 69;

		}
		//Returns
		return (hash & 0xFFFFF);
	}
}
