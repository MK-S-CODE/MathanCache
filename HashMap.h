#include <iostream>
#include <string>

class HashMap {
private:
	std::string boxes[100];

	unsigned int GetHash(std::string key) {
		unsigned int Hash = 2166136261u;
		unsigned int multiplier = 16777619u;
		for (char c : key) {
			Hash ^= (unsigned)c;
			Hash *= multiplier;
		}
		return Hash % 100;
	}
public:
	void Set(std::string key, std::string value);
	std::string Get(std::string key);
};