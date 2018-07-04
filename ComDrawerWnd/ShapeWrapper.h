#pragma once
class ShapeWrapper
{
public:
	ShapeWrapper(CComPtr<IShapeToDraw> shape);    
	~ShapeWrapper();

	void Draw(HDC hDc);
private:
	HBRUSH m_brush;
	CComPtr<IShapeToDraw> m_shape;
};

