#pragma once

/**
* @file Rectangle.h
* @bref ‹éŒ`î•ñ‚ğˆ—‚·‚éƒNƒ‰ƒX
*/
template<class T>
class Rectangle
{
public:
	Rectangle() {
		left = top = 0;
		width = height = 1;
	};

	Rectangle( T left_, T top_, T width_, T height_) {
		left = left_;
		top = top_;
		width = width_;
		height = height_;
	};

	~Rectangle() {};

	T GetLeft()		{return left;			}
	T GetTop()		{return top;			}
	T GetRight()	{return left + width;	}
	T GetBottom()	{return top + height;	}
	T GetWidth()	{return width;			}
	T GetHeight()	{return height;			}

private:
	T left, top, width, height;
};

