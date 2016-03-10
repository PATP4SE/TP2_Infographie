#include "Utilities.h"



Utilities::Utilities()
{
}


Utilities::~Utilities()
{
}

void Utilities::ExportImage(ofImage *_image)
{

}

ofImage* Utilities::ImportImage(string _path)
{
	ofImage *image = new ofImage();

	image->load(_path);

	return image;
}