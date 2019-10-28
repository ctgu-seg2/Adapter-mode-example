#pragma once
#include <string>
#include <vector>
#include "Object.h"
#include "MeshData.h"
#include "DataAdapter.h"
class ExternalFormatRW
{
private:
	vector<string> mflieName;
	vector<MeshData> mmesh;
public:
	void ReadFile(string fileName);
	vector<Object> DesolveObject(DataAdapter dataAdapter,bool discardObjName);
public:
	ExternalFormatRW();
	~ExternalFormatRW();
};

