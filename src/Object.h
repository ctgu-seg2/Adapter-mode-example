#pragma once
#include <string>
#include "MeshData.h"
#include "Material.h"
class Object
{
private:
	string name;      //����ģ������
	MeshData mesh;    //����������Ϣ
	Material material;//���������Ϣ
public:
	void Draw();
public:
	Object();
	~Object();
};

