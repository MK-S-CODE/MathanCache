#include "HashMap.h"

void HashMap::Set(std::string key, std::string value) {
	int index = GetHash(key);
	boxes[index] = value;
}

std::string HashMap::Get(std::string key) {
	int index = GetHash(key);
	return boxes[index];
}

int main() {
	HashMap database;
	database.Set("name", "mathan");
	database.Set("age", "24");

	std::cout << "name is: " << database.Get("name") << std::endl;
	std::cout << "age: " << database.Get("age") << std::endl;

	std::cin.get();
}