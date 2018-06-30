// SquareObject.cpp : Implementation of CSquareObject

#include "stdafx.h"
#include "SquareObject.h"
#include "wingdi.h"

// CSquareObject

HRESULT CSquareObject::Draw(wireHDC hDc)
{
	HDC localDc = (HDC)hDc; 
	HBRUSH blueBrush = CreateSolidBrush(RGB(0, 255, 0));
	HBRUSH old = (HBRUSH)::SelectObject(localDc, blueBrush);
	::Rectangle(localDc, m_x, m_y, m_x + m_sideSize, m_y + m_sideSize);
	::SelectObject(localDc, old);
	return 0;
}
