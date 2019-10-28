#include "pch.h"
#include "MeshData.h"


MeshData::MeshData()
{
}


MeshData::~MeshData()
{
}

void MeshData::setPolygonData()
{
	name = cin.get();//输入name
	mPolygonData.name = name;
	cout << "获得PolygonData" << endl;
}
PolygonData MeshData::getPolygonData()
{
	//cout<<"获得PolygonData"<<endl;
	return mPolygonData;
}
