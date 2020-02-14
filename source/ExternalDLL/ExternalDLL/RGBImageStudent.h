/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include <array>
#include <vector>
#include "RGBImage.h"
class RGBImageStudent : public RGBImage {
	std::vector<std::vector<RGB>> RGB2;

	void resetSize();
public:
	RGBImageStudent();
	RGBImageStudent(const RGBImageStudent& other);
	RGBImageStudent(const int width, const int height);
	~RGBImageStudent();

	void set(const int width, const int height);
	void set(const RGBImageStudent& other);

	void setPixel(int x, int y, RGB pixel);
	void setPixel(int i, RGB pixel);

	RGB getPixel(int x, int y) const;
	RGB getPixel(int i) const;

	std::vector<std::vector<RGB>> getRGBMatrix() const;
};