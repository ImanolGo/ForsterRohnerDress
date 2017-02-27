/*
 *  Led.h
 *  Hero Dress
 *
 *  Created by Imanol Gomez on 09/09/16.
 *
 */


#pragma once

#include "ofMain.h"
#include "BasicVisual.h"


class Led: public BasicVisual {
    
    static const int SIZE;
    
    public:
    
        Led(const ofPoint& position, int id);
    
        virtual ~Led();
       
        void draw();
    
        void draw(int width, int height);
    
        int getId() const {return m_id;}
    
        void normalize(const ofRectangle& boundingBox);
    
        void setPixelColor(ofPixelsRef pixels);
    
    private:
            
        int m_id;
};




