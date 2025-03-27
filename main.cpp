#include "MusicPlayer.h"
#include <iostream>

int main(){
    MusicPlayer player;
    player.loadPlaylist("my_songs.txt");
    player.play();
    player.next();
    player.pause();
    // player.next();
    // player.play();
    // player.next();
    player.showStatus();
    return 0;
}
// #include <iostream>
// int main(){
//     std::cout << "Hello test" << std::endl;
//     return 0;
// }
