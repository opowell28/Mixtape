//
// Created by Owen Powell on 12/5/18.
//

#include <iostream>
#include "Mixtape.h"

using namespace std;

    void Mixtape::addSong(Song trk){                                                                                    //function adds song to songs vector
        this->songs.push_back(trk);                                                                                     //"trk" stands for "track"
    }

    void Mixtape::remSong(){                                                                                            //function removes song from songs vector
        this->songs.pop_back();
    }

    void Mixtape::playAll(){                                                                                            //function plays all songs in the Mixtape
        for(Song trk : this->songs){
            cout << trk.playSong() << endl;
        }
    }
