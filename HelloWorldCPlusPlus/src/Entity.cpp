#include <string> 

// If it's in a parent directory
#include "SubEntity.cpp" 

class Entity
{
public:
	Entity(int a, std::string& b, int v, int subValue) : id(a), name(b), value(v), subEntity(subValue) {

	}
	virtual std::string GetName() {
		return "Entity";
	}
			

	int id;
	std::string name; 
	SubEntity subEntity;

private:
	int value;
};
