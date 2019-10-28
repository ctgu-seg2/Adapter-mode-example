#include "pch.h"
#include "ExternalFormatRW.h"


ExternalFormatRW::ExternalFormatRW()
{
}


ExternalFormatRW::~ExternalFormatRW()
{
}

void ExternalFormatRW::ReadFile(string fileName) {
	cout << "ExternalFormatRW::ReadFile" << endl;
}
vector<Object> ExternalFormatRW::DesolveObject(DataAdapter dataAdapter, bool discardObjName) {
	cout << "ExternalFormatRW::DesolveObject" << endl;
}

