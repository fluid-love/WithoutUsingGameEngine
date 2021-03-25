#include <iostream>
#include <cmath>
#include <numbers>

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
	float m[4][4] = {};


	//operator
	Vec4 operator*(const Vec4& v) {
		return
		{
			v.x * m[0][0] + v.y * m[0][1] + v.z * m[0][2] + v.w * m[0][3],
			v.x * m[1][0] + v.y * m[1][1] + v.z * m[1][2] + v.w * m[1][3],
			v.x * m[2][0] + v.y * m[2][1] + v.z * m[2][2] + v.w * m[2][3],
			v.x * m[3][0] + v.y * m[3][1] + v.z * m[3][2] + v.w * m[3][3]
		};
	}

	Matrix4 operator*(const Matrix4& in) {
		Matrix4 res;
		for (uint16_t j = 0; j < 4; j++) {
			for (uint16_t i = 0; i < 4; i++) {
				res.m[j][i] = m[j][0] * in.m[0][i] + m[j][1] * in.m[1][i] + m[j][2] * in.m[2][i] + m[j][3] * in.m[3][i];
			}
		}
		return res;
	}

	void cout() {
		for (uint16_t j = 0; j < 4; j++) {
			for (uint16_t i = 0; i < 4; i++) {
				std::cout << m[j][i] << " ";
			}
			std::cout << std::endl;
		}
	}

};

//もともとの位置
Vec4 pos = { 1.0f,0.0f,0.0f,1.0f };

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


//拡大縮小したい倍率
float sx = 3.0f;
float sy = 2.0f;
float sz = 0.0f;

//scale matrix
Matrix4 sm = {
	sx,   0.0f, 0.0f, 0.0f,
	0.0f, sy,   0.0f, 0.0f,
	0.0f, 0.0f, sz,   0.0f,
	0.0f, 0.0f, 0.0f, 1.0f
};

//?軸を回転軸として回転させたいradian
float radianX = std::numbers::pi_v<float>;
float radianY = std::numbers::pi_v<float>;
float radianZ = std::numbers::pi_v<float>;


//rotation matrix
//axis x
Matrix4 rmx{
	1.0f ,1.0f               ,1.0f               ,0.0f,
	0.0f ,std::cosf(radianX) ,-std::sin(radianX) ,0.0f,
	0.0f ,std::sin(radianX)  ,std::cos(radianX)  ,0.0f,
	0.0f ,0.0f               ,0.0f               ,1.0f
};

//axis y
Matrix4 rmy{
	std::cosf(radianY) ,0.0f   ,std::sinf(radianY) ,0.0f,
	0.0f               ,1.0f   ,0.0f               ,0.0f,
	-std::sin(radianY) ,0.0f   ,std::cos(radianY)  ,0.0f,
	0.0f               ,0.0f   ,0.0f               ,1.0f
};

//axis z
Matrix4 rmz{
	std::cosf(radianZ) ,-std::sin(radianZ) ,0.0f ,0.0f,
	std::sin(radianX)  ,std::cos(radianX)  ,0.0f ,0.0f,
	0.0f               ,0.0f               ,1.0f ,0.0f,
	0.0f               ,0.0f               ,0.0f ,1.0f
};

Vec3 cameraPos = { 0.0f,0.0f,2.0f };

int main() {

	//Vec4 result = tm * pos;
	//Vec4 result = sm * pos;

	Vec4  result = rmz * pos;
	std::cout
		<< result.x << " "
		<< result.y << " "
		<< result.z << " ";
	//<< result.w;
}
