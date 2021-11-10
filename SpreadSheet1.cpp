#include "SpreadSheet.h"

SpreadSheet::SpreadSheet(size_t width, size_t height) : mWidth(width), mHeight(height)
{
	mCells = new SpreadSheetCell*[mWidth];
	for(size_t i = 0; i < mWidth; i++){
		mCells[i] = new SpreadSheetCell[mHeight];
	}
}

void SpreadSheet::setCellAt(size_t x, size_t y, const SpreadSheetCell& cell)
{
	if(!inRange(x, mWidth) || inRange(y, mHeight)) {
		throw std::out_of_range("");

	}
	mCells[x][y] = cell;
}

SpreadSheetCell& SpreadSheet::getCellAt(size_t x, size_t y)
{
	if(!inRange(x, mWidth) || !inRange(y, mHeight)){
		throw std::out_of_range("");

	}
	return mCells[x][y];