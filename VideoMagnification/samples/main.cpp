#include "Magnificator.h"
int main() {
	VideoCapture cap(0);
	ImageProcessingFlags IPF;
	ImageProcessingSettings IPS;
	IPS.amplification = 5;
	vector<Mat> frames;
	Magnificator mnf(&frames, &IPF, &IPS);

	mnf.waveletMagnify(cap);
	return 0;
}
