#include "MusicPlayer.h"
#include "Navigation.h"
#include "Settings.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;

void displayMenu(){
    cout << "IVI System" << endl;
    cout << "1. Music Player" << endl;
    cout << "2. Navigation" << endl;
    cout << "3. Settings" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main(){
    
    MusicPlayer music;
    // player.loadPlaylist("my_songs.txt");
    // player.play();
    // player.next();
    // player.pause();

    // player.showStatus();

    Navigation nav;
    // cout<<" The default route is: "<<endl;
    // nav.showRoute();

    // cout<<"Setting a new route: "<<endl;
    // nav.setRoute("Toronto", "Ottawa");
    // nav.showRoute();
    // nav.startNavigation();
    // nav.pauseNavigation();
    // nav.startNavigation();
    // nav.stopNavigation();

    Settings settings;
    // cout<<"The default settings are: "<<endl;
    // settings.showSettings();
    // cout<<"Toggling voice control: "<<endl;
    // settings.toggleVoiceControl();
    // cout<<"Toggling safety mode: "<<endl;
    // settings.toggleSafetyMode();
    int choice;
    do{
        displayMenu();
        cin >> choice;
        //cin.ignore();  
        switch (choice) {
            case 1: {
                int subChoice;
                do {
                    cout << "\n--- Music Player ---\n";
                    cout << "1. play\n";
                    cout << "2. pause\n";
                    cout << "3. next\n";
                    cout << "4. show status\n";
                    cout << "0. main menu\n";
                    cout << "choice: ";
                    std::cin >> subChoice;
                    std::cin.ignore();
                    switch (subChoice) {
                        case 1:
                            music.play();
                            break;
                        case 2:
                            music.pause();
                            break;
                        case 3:
                            music.next();
                            break;
                        case 4:
                            music.showStatus();
                            break;
                        case 0:
                            cout << "main menu\n";
                            break;
                        default:
                            cout << "void, try again\n";
                    }
                } while (subChoice != 0);
                break;
            }
            case 2: {
       
                string start, dest;
                cout << "\n--- Navigation ---\n";
                cout << "Input your start location: ";
                getline(cin, start);
                cout << "Input your destination: ";
                getline(cin, dest);
                nav.setRoute(start, dest);
                nav.showRoute();
                break;
            }
            case 3: {
                
                int subChoice;
                do {
                    cout << "\n--- Settings ---\n";
                    cout << "1. voice model\n";
                    cout << "2. safe model\n";
                    cout << "3. show status\n";
                    cout << "4. Exit\n";
                    cout << "choice: ";
                    cin >> subChoice;
                    cin.ignore();
                    switch (subChoice) {
                        case 1:
                            settings.toggleVoiceControl();
                            break;
                        case 2:
                            settings.toggleSafetyMode();
                            break;
                        case 3:
                            settings.showSettings();
                            break;
                        case 0:
                            cout << "Exit\n";
                            break;
                        default:
                            cout << "Void, try again\n";
                    }
                } while (subChoice != 0);
                break;
            }
            case 0:
                cout << "Exit\n";
                break;
            default:
                cout << "void, try again\n";
        }}
        while(choice != 4);

    return 0;
}