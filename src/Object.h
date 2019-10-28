#pragma once
#include <string>
#include "MeshData.h"
#include "Material.h"
class Object
{
private:
	string name;      //储存模型名字
	MeshData mesh;    //储存网格信息
	Material material;//储存材质信息
public:
	void Draw();
public:
	Object();
	~Object();
};

