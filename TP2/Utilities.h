#pragma once

#include <string>
#include "ofMain.h"

using namespace std;

class Utilities
{

public:
	Utilities();
	~Utilities();

	ofImage* ImportImage(string _path);
	void ExportImage(ofImage *_image);

};

