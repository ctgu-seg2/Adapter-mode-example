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
	name = cin.get();//����name
	mPolygonData.name = name;
	cout << "���PolygonData" << endl;
}
PolygonData MeshData::getPolygonData()
{
	//cout<<"���PolygonData"<<endl;
	return mPolygonData;
}
