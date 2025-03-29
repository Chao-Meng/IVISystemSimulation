#ifndef SETTING_H
#define SETTING_H

class Settings{
    private:
        bool voiceControl;
        bool safetyMode;
    public:
        Settings();
        void toggleVoiceControl();
        void toggleSafetyMode();
        void showSettings() const;
};
#endif