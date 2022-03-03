#pragma once

#pragma region Vector2
class Vector2
{
public:
	Vector2() :x(0), y(0) {};
	Vector2(float fx, float fy) :x(fx), y(fy) {};
	Vector2(const Vector2& v2) :x(v2.x), y(v2.y) {};
	~Vector2() {};

	Vector2 operator+(const Vector2& v2)
	{
		return Vector2(x + v2.x, y + v2.y);
	}

	Vector2 operator-(const Vector2& v2)
	{
		return Vector2(x - v2.x, y - v2.y);
	}

	Vector2 operator*(const Vector2& v2)
	{
		return Vector2(x * v2.x, y * v2.y);
	}

	Vector2 operator/(const Vector2& v2)
	{
		return Vector2(x / v2.x, y / v2.y);
	}

	Vector2& operator+=(const Vector2& v2)
	{
		x += v2.x;
		y += v2.y;
		return  *this;
	}

	Vector2& operator-=(const Vector2& v2)
	{
		x -= v2.x;
		y -= v2.y;
		return  *this;
	}

	Vector2& operator*=(const Vector2& v2)
	{
		x *= v2.x;
		y *= v2.y;
		return  *this;
	}

	Vector2& operator/=(const Vector2& v2)
	{
		x /= v2.x;
		y /= v2.y;
		return  *this;
	}


public:
	float x, y;

};
#pragma endregion

#pragma region Vector3
class Vector3
{
public:
	Vector3(float fx, float fy, float fz) :x(fx), y(fy), z(fz) {};
	Vector3(const Vector3& v3) : x(v3.x),y(v3.y),z(v3.z){};
	Vector3() :x(0), y(0), z(0) {};
	~Vector3() {};

	Vector3 operator+(const Vector3& v3)
	{
		return Vector3(x + v3.x, y + v3.y, z + v3.z);
	}

	Vector3 operator-(const Vector3& v3)
	{
		return Vector3(x - v3.x, y - v3.y, z - v3.z);
	}

	Vector3 operator*(const Vector3& v3)
	{
		return Vector3(x * v3.x, y * v3.y, z * v3.z);
	}

	Vector3 operator/(const Vector3& v3)
	{
		return Vector3(x / v3.x, y / v3.y, z / v3.z);
	}

	Vector3& operator+=(const Vector3& v3)
	{
		x += v3.x;
		y += v3.y;
		z += v3.z;
		return  *this;
	}

	Vector3& operator-=(const Vector3& v3)
	{
		x -= v3.x;
		y -= v3.y;
		z -= v3.z;
		return  *this;
	}

	Vector3& operator*=(const Vector3& v3)
	{
		x *= v3.x;
		y *= v3.y;
		z *= v3.z;
		return  *this;
	}

	Vector3& operator/=(const Vector3& v3)
	{
		x /= v3.x;
		y /= v3.y;
		z /= v3.z;
		return  *this;
	}

public:
	float x, y, z;

};
#pragma endregion


