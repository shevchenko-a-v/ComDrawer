// CircleObject.cpp : Implementation of CCircleObject

#include "stdafx.h"
#include "CircleObject.h"


// CCircleObject

HRESULT CCircleObject::SetPosition(RECT r)
{
	int width = abs(r.right - r.left);
	int height = abs(r.bottom - r.top);
	m_sideSize = min(width, height);
	m_x = r.left + (width > height ? (width - height) / 2 : 0);
	m_y = r.top + (height > width ? (height - width) / 2 : 0);

	return 0;
}

HRESULT CCircleObject::Draw(HDC hDc, HBRUSH brush)
{
	HBRUSH old = (HBRUSH)::SelectObject(hDc, brush);
	::Ellipse(hDc, m_x, m_y, m_x + m_sideSize, m_y + m_sideSize);
	::SelectObject(hDc, old);
	return 0;
}
