#include "Navigation.h"
#include <iostream>

using std::cout;
Navigation::Navigation(){
    startLocation = "Toronto";
    destinationLocation = "Montreal";
    isNavigating = false;
}

void Navigation::setRoute(const string& start, const string& destination){
    startLocation = start;
    destinationLocation = destination;
    cout<< "Route is set from " << startLocation << " to " << destinationLocation << std::endl;
}

void Navigation::showRoute(){
   if(startLocation.empty() || destinationLocation.empty()){
       cout << "Route is not set" << std::endl;
    } else {
    cout << "The current route is from " << startLocation << " to " << destinationLocation << std::endl;
    }
}
void Navigation::startNavigation(){
    if(startLocation.empty() || destinationLocation.empty()){
        cout << "Navigation can not start, because the route is not set" << std::endl;
    } else {
        isNavigating = true;
        cout << "Navigation started from " << startLocation << " to " << destinationLocation << std::endl;
    }
}

void Navigation::pauseNavigation(){
    if(isNavigating){
        isNavigating = false;
        cout << "Navigation paused" << std::endl;
    } else {
        cout << "Navigation is not started" << std::endl;
    }
}

void Navigation::stopNavigation(){
    if(isNavigating){
        isNavigating = false;
        cout << "Navigation stopped" << std::endl;
    } else {
        cout << "Navigation is not started" << std::endl;
    }
}