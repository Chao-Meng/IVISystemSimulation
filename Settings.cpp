#include "Settings.h"
#include <iostream>

using std::cout;
Settings::Settings(){
    voiceControl = false;
    safetyMode = false;
}

void Settings::toggleVoiceControl(){
    voiceControl = !voiceControl;
    cout << "Voice control is " << (voiceControl ? "enabled" : "disabled") << std::endl;
}

void Settings::toggleSafetyMode(){
    safetyMode = !safetyMode;
    cout << "Safety mode is " << (safetyMode ? "enabled" : "disabled") << std::endl;
}

void Settings::showSettings() const{
    cout << "Current settings\n"
    <<"Voice control is " << (voiceControl ? "enabled" : "disabled") << std::endl;
    cout << "Safety mode is " << (safetyMode ? "enabled" : "disabled") << std::endl;
}