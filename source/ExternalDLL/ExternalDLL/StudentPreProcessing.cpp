#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	//TODO write stuff. source formula: https://canvas.instructure.com/courses/742361/files/19721111/download?verifier=jIkFacgbgFjLGwgZI7sNKk41RvcXQLBc0clu77rN&wrap=1
	IntensityImage* intensityImage = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());
	for (unsigned int y = 0; y < image.getHeight(); y++) {
		for (unsigned int x = 0; x < image.getWidth(); x++) {
			RGB tmpPixel = image.getPixel(x,y);
			Intensity intensity = (double(tmpPixel.r) + double(tmpPixel.g) + double(tmpPixel.b)) / 3;
			intensityImage->setPixel(x, y, intensity);
		}
	}
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