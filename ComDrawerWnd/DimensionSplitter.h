#pragma once

class DimensionSplitter
{
public:
	DimensionSplitter() {}
	~DimensionSplitter() {}

	void SetBaseRect(const CRect &rect);
	void GetSplitRects(std::vector<RECT> &splitRects);
private:
	CRect m_rectToSplit;
};


// in order to use kdtree we need a class of point which supports [] operator and have a static member variable DIM for dimension
class MyPoint : public std::array<int, 2>
{
public:
	// dimension of the Point
	static const int DIM = 2;
};

