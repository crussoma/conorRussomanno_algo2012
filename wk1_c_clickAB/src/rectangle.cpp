#include "rectangle.h"


//------------------------------------------------------------------
void rectangle::setup(int red, int green, int blue){
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    rectColor.r = red;
    rectColor.g = green;
    rectColor.b = blue;
    
}

//------------------------------------------------------------------
void rectangle::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(rectColor);
    ofRect(pos.x, pos.y, 20,20);
}


//------------------------------------------------------------------
