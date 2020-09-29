#include <math.h>

template <typename T>
class vec3{
private:


public:
	//Values
	T x, y, z;

	//constructors
	vec3() : x(0.0f), y(0.0f), z(0.0f) {}

	vec3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}

	template <typename T>
	vec3(const vec3<T> v) : x(v.x),y(v.y),z(v.z){}

	//Methods
	void Normalize() {
		float length = sqrt(x * x + y * y + z * z);
		this->x = x / length;
		this->y = y / length;
		this->z = z / length;
	}

	void Zero() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	bool IsZero() {
		return (this->x == 0) && (this->y == 0) && (this->z == 0);
	}

	template <typename T>
	float DistanceTo(const vec3<T> v) {

		float a, b, c;
		a = v.x - this->x;
		b = v.y - this->y;
		c = v.z - this->z;

		return sqrt(a*a+b*b+c*c);
	}

	//Operator
	template <typename T>
	vec3<float> operator+(vec3<T> v) {
		vec3<float> newV(this->x + v.x, this->y + v.y, this->z + v.z);
		return newV;
	}
	template <typename T>
	vec3<float> operator-(vec3<T> v) {
		vec3<float> newV(this->x - v.x, this->y - v.y, this->z - v.z);
		return newV;
	}

	template <typename T>
	void operator+=(vec3<T> v) {
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
	}

	template <typename T>
	void operator-=(vec3<T> v) {
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
	}

	template <typename T>
	void operator=(vec3<T> v) {
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	}

	template<typename T>
	bool operator==(vec3<T> v) {
		return (this->x == v.x) && (this->y == v.y) && (this->z == v.z);
	}

};

