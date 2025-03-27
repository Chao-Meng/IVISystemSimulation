#include "MusicPlayer.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::getline;

MusicPlayer::MusicPlayer(){
    currentSongIndex = 0;
    isPlaying = false;
    playlist.push_back("myFavoriateSong1.mp3");
    playlist.push_back("myFavoriateSong2.mp3");
    playlist.push_back("myFavoriateSong3.mp3");
    cout << "MusicPlayer object is created" << endl;
}

void MusicPlayer::loadPlaylist(const string& filename){
    ifstream file(filename);
    if(!file.is_open()){
        cout << "Failed to open the file, and use the default songs' playlist" << endl;
        return;
    }
    string songName;
    if(file.is_open()){
        while(getline(file, songName)){
            playlist.push_back(songName);
        }
        file.close();
        currentSongIndex = 0;
        cout << "Playlist is loaded successfully" << endl;
    }
}

void MusicPlayer::play(){
    if(playlist.size() == 0){
        cout << "Playlist is empty" << endl;
        return;
    }
    isPlaying = true;
    cout << "Playing: < " << playlist[currentSongIndex] << "> "<< endl;
}

void MusicPlayer::pause(){
    if(isPlaying){
        isPlaying = false;
        cout << "Paused: < " << playlist[currentSongIndex] << "> "<< endl;
    }
    else{
        cout << "The player is not playing" << endl;
    }
}

void MusicPlayer::next(){
    if(playlist.size() == 0){
        cout << "Playlist is empty" << endl;
        return;
    }
    if(isPlaying){
        cout << "Playing: < " << playlist[currentSongIndex] << "> "<< endl;
    }
    else{
        cout << "Paused: < " << playlist[currentSongIndex] << "> "<< endl;
    }
    currentSongIndex = (currentSongIndex + 1) % playlist.size();
}

void MusicPlayer::showStatus(){
    if(playlist.size() == 0){
        cout << "Playlist is empty" << endl;
        return;
    }
    cout << "======Music Player Status======" << endl;
    cout << "Current song: < " << playlist[currentSongIndex] << "> "<< endl;
    if(isPlaying){
        cout << "The player is playing" << endl;
    }
    else{
        cout << "The player is paused" << endl;
    }
    cout << "Total songs in the playlist: " << playlist.size() << endl;
    cout << "Current song is the : " << currentSongIndex + 1 << endl;
    cout << "================================" << endl;
}
