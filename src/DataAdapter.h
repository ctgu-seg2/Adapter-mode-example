/**
 * 数据适配器
 */

#pragma once

#include "MeshData.h"
#include "Object.h"

class GetMeshData 
{
private:
    // private constructor : prevent extern initializing this interface
    GetMeshData();

public:
    virtual Object convertIn(MeshData data, Object obj = NULL) = 0;
    virtual ~GetMeshData();
}

// TODO: DataAdapter class

class DataAdapter : public GetMeshData
{
public:
    DataAdapter();

    virtual Object convertIn(MeshData data, Object obj = NULL) override;
};

Object DataAdapter::convertIn(MeshData data, Object obj)
{
    // extern data convert intern data
}