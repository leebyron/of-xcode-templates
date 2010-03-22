// Copyright ___YEAR___-present ___ORGANIZATIONNAME___. All Rights Reserved.

/**
 *  ___PROJECTNAME___
 *
 *  An application built using openFrameworks
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___
 */

#include "ofMain.h"
#include "ofAppGlutWindow.h"
#include "___PROJECTNAMEASIDENTIFIER___App.h"

//========================================================================
int main(int argc, char*argv[]) {

  ofAppGlutWindow window;
  ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);

  ofRunApp(new ___PROJECTNAMEASIDENTIFIER___App());
}
