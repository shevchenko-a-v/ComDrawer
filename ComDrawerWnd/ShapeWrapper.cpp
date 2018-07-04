#include "stdafx.h"
#include "ShapeWrapper.h"



ShapeWrapper::ShapeWrapper(CComPtr<IShapeToDraw> shape)
{
	m_shape = shape; 
	std::random_device rd;
	std::uniform_int_distribution<int> colorDist(0, 255);

	m_brush = CreateSolidBrush(RGB(colorDist(rd), colorDist(rd), colorDist(rd)));
}

ShapeWrapper::~ShapeWrapper()
{
	DeleteObject(m_brush);
}

void ShapeWrapper::Draw(HDC hDc)
{
	m_shape->Draw((wireHDC)hDc, (wireHBRUSH)m_brush);
}
