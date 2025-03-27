/* Copyright 2025
 * Title: Program to simulate the MusicPlayer module for IVI system
 * Author: Qusay H. Mahmoud
 * Student Name: Chao Meng
 * Student ID: 100997810
 * Date: March 25, 2025
 * Description: This header file declares the MusicPlayer class. it maintains a playlist 
 * the index of the current playing song, and the status of the player. It also provides
 * methods to load a playlist from a file, play, pause, skip to the next song, and show the
 * status of the player.
 */
#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <string>

using std::vector;
using std::string;

class MusicPlayer{
    private:
        vector<string> playlist;
        int currentSongIndex;
        bool isPlaying;
        
    public:
    MusicPlayer();
    void loadPlaylist(const string& filename);
    void play();
    void pause();
    void next();
    void showStatus();
};
#endif