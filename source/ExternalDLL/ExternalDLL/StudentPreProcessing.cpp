#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	//source formula: https://canvas.instructure.com/courses/742361/files/19721111/download?verifier=jIkFacgbgFjLGwgZI7sNKk41RvcXQLBc0clu77rN&wrap=1
	IntensityImage* intensityImage = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());
	for (uint_fast64_t y = 0; y < image.getHeight(); y++) {
		for (uint_fast64_t x = 0; x < image.getWidth(); x++) {
			RGB tmpPixel = image.getPixel(x,y);
			//standaard, (R+G+B)/3
			if (false) {
				intensityImage->setPixel(x, y,
					(double(tmpPixel.r) + double(tmpPixel.g) + double(tmpPixel.b)) / 3);
			}
			// R * (1/3), G * (1/2), B * (1/6)
			else if (false) {
				intensityImage->setPixel(x, y,
					double(tmpPixel.r) * (1.f / 3.f) + double(tmpPixel.g) * (0.5) + double(tmpPixel.b) * (1.f / 6.f));
			}
			// R * 30%, G * 59%, B * 0.11%
			else if (true) {
				intensityImage->setPixel(x, y,
					double(tmpPixel.r) * (0.30) + double(tmpPixel.g) * (0.59) + double(tmpPixel.b) * (0.11));
			}
		}
	}
	//intensityImage->setPixel(0, 0, 0); //test if actually being used
	return intensityImage;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}