#pragma once
#include <string>
#include "MeshData.h"
#include "Material.h"

class Object
{
private:
	string name;      // 对象名称
	MeshData mesh;    // 对象保留的一份网格数据
	Material material;// 附加到对象的材质
public:
	void Draw();
public:
	Object();
	~Object();
};

