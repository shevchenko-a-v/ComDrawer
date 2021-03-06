#include "stdafx.h"
#include "DimensionSplitter.h"
#include "ExternalInc\kdtree.h" // a little bit modified external file to retrieve rects without intersection


void DimensionSplitter::SetBaseRect(const CRect & rect)
{
	m_rectToSplit = rect;
}

void DimensionSplitter::GetSplitRects(std::vector<RECT> &splitRects)
{
	const int avarageSizeOfRect = 100 * 100;

	std::random_device rd;
	std::uniform_int_distribution<int> distX(m_rectToSplit.left, m_rectToSplit.right);
	std::uniform_int_distribution<int> distY(m_rectToSplit.top, m_rectToSplit.bottom);
	int numberOfRects = (m_rectToSplit.Width() * m_rectToSplit.Height())/avarageSizeOfRect;
	
	std::vector<MyPoint> points;
	for (int i = 0; i < numberOfRects; ++i)
	{
		MyPoint point;
		point[0] = distX(rd);
		point[1] = distY(rd);
		points.push_back(point);
	}

	kdt::KDTree<MyPoint> tree(points);
	splitRects.clear();
	tree.getTreeAsRects(m_rectToSplit, splitRects);
}
