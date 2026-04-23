#include "Entity.cpp"

class Player : public Entity
{
public:
	int x, y;
	int speed;

	Player(const std::string& name) : m_Name(name), Entity(0, const_cast<std::string&>(name), 0, 0) {

	}

	void MovePlayer(int deltaX, int deltaY)
	{
		x += deltaX * speed;
		y += deltaY;
	}

	std::string GetName() override {
		return m_Name;
	}

private:
	std::string m_Name;
};
