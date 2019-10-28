#pragma once
#include<iostream>
using namespace std;
struct PolygonData
{
	string name;
};//×Ô¶¨ÒåPolygonData
class MeshData
{
private:
	string name;
	PolygonData mPolygonData;
public:
	void setPolygonData();
	PolygonData getPolygonData();
public:
	MeshData();
	~MeshData();
};
