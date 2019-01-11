//
// Created by Owen Powell on 12/5/18.
//

#ifndef FINALPROJECT_PLAYLIST_H
#define FINALPROJECT_PLAYLIST_H

#include <vector>
#include "Song.h"

class Mixtape {                                                                                                         //create class for the playlist
    private:
        std::vector <Song> songs;                                                                                       //create the songs vector

    public:
        void addSong(Song trk);                                                                                         //all functions used in Playlist.cpp
        void remSong();
        void playAll();
};

#endif //FINALPROJECT_PLAYLIST_H
