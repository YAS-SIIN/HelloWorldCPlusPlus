struct VectorTest
{
	float x, y;

	VectorTest(float x, float y) : x(x), y(y) {}


	VectorTest Add(const VectorTest& other) const
	{
		return VectorTest(x + other.x, y + other.y);
	}


	VectorTest Multiply(const VectorTest& other) const
	{
		return VectorTest(x * other.x, y * other.y);
	}


	VectorTest operator+(const VectorTest& other) const
	{
		return Add(other);
	}


	VectorTest operator*(const VectorTest& other) const
	{
		return Multiply(other);
	}


	bool operator==(const VectorTest& other) const
	{
		return x == other.x && y == other.y;
	}
};