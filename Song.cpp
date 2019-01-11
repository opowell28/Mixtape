//
// Created by Owen Powell on 12/5/18.
//

#include <iostream>
#include "Song.h"

using namespace std;

    Song::Song(){};

    Song::Song(string title, string artist, double runtime, string album, string link){                                 //data type of each songs attributes, runtime counted as a decimal percentage of one minute, i.e. 2.3 is roughly 2 minutes, 20 seconds
        this->title = title;
        this->artist = artist;
        this->runtime = runtime;
        this->album = album;
        this->link = link;
    }

    string Song::playSong(){                                                                                            //function to "play" each song by printing its data
        string song = "";
        song = "Title: " + title
                + "\n Artist: " + artist
                + "\n Length: " + to_string(runtime) + " minutes "
                + "\n Album Title: " + album
                + "\n Apple Music Link: " + link
                + "\n";
        return song;                                                                                                    //return the song's info and print
    }