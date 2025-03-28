#include "MusicPlayer.h"
#include "Navigation.h"
#include <iostream>

using std::cout;
using std::endl;
int main(){
    // MusicPlayer player;
    // player.loadPlaylist("my_songs.txt");
    // player.play();
    // player.next();
    // player.pause();

    // player.showStatus();

    Navigation nav;
    cout<<" The default route is: "<<endl;
    nav.showRoute();

    cout<<"Setting a new route: "<<endl;
    nav.setRoute("Toronto", "Ottawa");
    nav.showRoute();
    nav.startNavigation();
    nav.pauseNavigation();
    nav.startNavigation();
    nav.stopNavigation();

    return 0;
}
// #include <iostream>
// int main(){
//     std::cout << "Hello test" << std::endl;
//     return 0;
// }
