// EllipseObject.cpp : Implementation of CEllipseObject

#include "stdafx.h"
#include "EllipseObject.h"


// CEllipseObject

HRESULT CEllipseObject::SetPosition(RECT r)
{
	m_rect = r;
	return 0;
}

HRESULT CEllipseObject::Draw(HDC hDc, HBRUSH brush)
{
	HBRUSH old = (HBRUSH)::SelectObject(hDc, brush);
	::Ellipse (hDc, m_rect.left, m_rect.top, m_rect.right, m_rect.bottom);
	::SelectObject(hDc, old);
	return 0;
}
