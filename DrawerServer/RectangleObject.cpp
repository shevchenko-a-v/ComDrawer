// RectangleObject.cpp : Implementation of CRectangleObject

#include "stdafx.h"
#include "RectangleObject.h"


// CRectangleObject

HRESULT CRectangleObject::SetPosition(RECT r)
{
	m_rect = r;
	return 0;
}

HRESULT CRectangleObject::Draw(HDC hDc, HBRUSH brush)
{
	HBRUSH old = (HBRUSH)::SelectObject(hDc, brush);
	::Rectangle(hDc, m_rect.left, m_rect.top, m_rect.right, m_rect.bottom);
	::SelectObject(hDc, old);
	return 0;
}
