//
// Created by Owen Powell on 12/5/18.
//

#ifndef FINALPROJECT_SONG_H
#define FINALPROJECT_SONG_H

#include <string>

class Song {
    private:
        std::string title;
        std::string artist;
        double runtime;
        std::string album;
        std::string link;
    public:
        Song();
        Song(std::string title, std::string artist, double runtime, std::string album, std::string link);
        std::string playSong();
};


#endif //FINALPROJECT_SONG_H
