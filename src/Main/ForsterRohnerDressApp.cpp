/*
 *  ForsterRohnerDressApp.cpp
 *  Forster Rohner Dress 
 *
 *  Created by Imanol Gomez on 27/02/17.
 *
 */

#include "AppManager.h"

#include "ForsterRohnerDressApp.h"

//--------------------------------------------------------------
void ForsterRohnerDressApp::setup(){
    AppManager::getInstance().setup();
}

//--------------------------------------------------------------
void ForsterRohnerDressApp::update(){
    AppManager::getInstance().update();
}

//--------------------------------------------------------------
void ForsterRohnerDressApp::draw(){
    AppManager::getInstance().draw();
}

void ForsterRohnerDressApp::exit()
{
    ofLogNotice() <<"ForsterRohnerDressApp::exit";

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ForsterRohnerDressApp::dragEvent(ofDragInfo dragInfo){

}
