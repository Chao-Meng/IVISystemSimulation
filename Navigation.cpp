#include "Navigation.h"
#include <iostream>

using std::cout;
Navigation::Navigation(){
    startLocation = "Toronto";
    destinationLocation = "Montreal";
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