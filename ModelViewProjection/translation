#include <iostream>

struct Vec3 {
	Vec3(float x, float y, float z) :x(x), y(y), z(z) {}
	float x, y, z;
};

struct Vec4 {
	Vec4(float x, float y, float z, float w) :x(x), y(y), z(z), w(w) {}
	float x, y, z, w;
};


//4*4の正方行列
struct Matrix4 {
	float a, b, c, d;
	float e, f, g, h;
	float i, j, k, l;
	float m, n, o, p;


	//operator
	Vec4 operator*(const Vec4 v) {
		return
		{
			v.x * a + v.y * b + v.z * c + v.w * d,
			v.x * e + v.y * f + v.z * c + v.w * h,
			v.x * i + v.y * j + v.z * c + v.w * l,
			v.x * m + v.y * n + v.z * c + v.w * p
		};
	}
};

//もともとの位置
Vec4 pos = { 1.0f,2.0f,0.0f,1.0f };

//加えたい値
float x = 3.0f;
float y = 2.0f;
float z = 0.0f;


//translation matrix
//4*4の行列
Matrix4 tm = {
	1.0f, 0.0f, 0.0f, x,
	0.0f, 1.0f, 0.0f, y,
	0.0f, 0.0f, 1.0f, z,
	0.0f, 0.0f, 0.0f, 1.0f
};



int main() {

	Vec4 result = tm * pos;


	std::cout
		<< result.x << " "
		<< result.y << " "
		<< result.z << " ";
	//<< result.w;
}
