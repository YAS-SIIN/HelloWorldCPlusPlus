class Player
{
public:
	int x, y;
	int speed;

	void MovePlayer(int deltaX, int deltaY)
	{
		x += deltaX * speed;
		y += deltaY;
	}
private:

};
