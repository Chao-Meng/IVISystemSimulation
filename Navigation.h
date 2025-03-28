#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <string>
using std::string;

class Navigation {
    public:
        Navigation();
        void setRoute(const string& start, const string& destination);
        void showRoute();
        void startNavigation();
        void pauseNavigation();
        void stopNavigation();
    private:
       string startLocation;
       string destinationLocation;
       bool isNavigating;
};

#endif