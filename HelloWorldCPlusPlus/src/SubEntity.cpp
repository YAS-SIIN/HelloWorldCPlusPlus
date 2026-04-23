#include <iostream>


class SubEntity
{
	public:
		SubEntity(int value) : SubValue(value) {
			std::cout << "SubEntity created with value: " << SubValue << std::endl;
		}
	
		int SubValue;
	
	
	private:

};

