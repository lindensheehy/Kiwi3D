#include "graphics/drawing/PixelTracker.h"

using namespace Graphics::Drawing;


PixelTracker::PixelTracker() {

    this->currentObject = nullptr;
    this->foundObject = nullptr;
    this->watchedPixel.set(0, 0);

    this->watchingPixelWrites = false;

    return;

}

void PixelTracker::foundWrite() {

    if (this->currentObject != nullptr) this->foundObject = this->currentObject;

    return;

}
