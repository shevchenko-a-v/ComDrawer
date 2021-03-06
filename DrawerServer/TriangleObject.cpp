// TriangleObject.cpp : Implementation of CTriangleObject

#include "stdafx.h"
#include "TriangleObject.h"


// CTriangleObject

HRESULT CTriangleObject::SetPosition(RECT r)
{
	m_vertices[0].x = r.left;
	m_vertices[0].y = r.bottom;
	
	m_vertices[1].x = (r.left + r.right) / 2;
	m_vertices[1].y = r.top;
	
	m_vertices[2].x = r.right;
	m_vertices[2].y = r.bottom;

	return 0;
}

HRESULT CTriangleObject::Draw(HDC hDc, HBRUSH brush)
{
	HBRUSH old = (HBRUSH)::SelectObject(hDc, brush);
	::Polygon(hDc, m_vertices, 3);
	::SelectObject(hDc, old);
	return 0;
}
