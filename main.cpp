#include <iostream>
#include "Mixtape.h"
#include "Song.h"
#include "debugger.h"

using namespace std;

int main() {
    Song Song1("Motiv8", "J. Cole", 2.23, "KOD","https://itunes.apple.com/us/album/motiv8/1373858456?i=1373858938");    //all song objects, including title, artist, duration, album, and Apple Music Link
    Song Song2("Wow Freestyle", "Jay Rock (feat. Kendrick Lamar)", 2.92, "Redemption", "https://itunes.apple.com/us/album/wow-freestyle-feat-kendrick-lamar/1395741818?i=1395742383");
    Song Song3("High", "Young Thug (feat. Elton John)", 3.25, "On The Rvn - EP", "https://itunes.apple.com/us/album/high-feat-elton-john/1437005625?i=1437005633");
    Song Song4("That's What Heaven Feels Like", "The Dirty Nil", 2.82, "Master Volume", "https://itunes.apple.com/us/album/thats-what-heaven-feels-like/1403549356?i=1403549504");
    Song Song5("Are You Gonna Be My Girl", "Jet", 3.60, "Are You Gonna Be My Girl - EP", "https://itunes.apple.com/us/album/are-you-gonna-be-my-girl/327050629?i=327050747");
    Song Song6("Who R U?", "Anderson .Paak", 2.80, "Oxnard", " https://itunes.apple.com/us/album/who-r-u/1439982774?i=1439983348");
    Song Song7("If I'm Lyin, I'm Flyin", "Kodak Black", 2.18, "If I'm Lyin, I'm Flyin - Single", " https://itunes.apple.com/us/album/if-im-lyin-im-flyin/1437023145?i=1437023148");
    Song Song8("Someday Believers", "Portugal. The Man", 3.90, "Evil Friends", " https://itunes.apple.com/us/album/someday-believers/613557623?i=613559267");


    Mixtape appleMusic;                                                                                                 //playlist of every song being worked with
    appleMusic.addSong(Song1);                                                                                          //add a song to the playlist
    appleMusic.addSong(Song2);
    appleMusic.addSong(Song3);
    appleMusic.addSong(Song4);
    appleMusic.addSong(Song5);
    appleMusic.addSong(Song6);
    appleMusic.addSong(Song7);
    appleMusic.addSong(Song8);

    appleMusic.playAll();                                                                                               //play every song in the playlist

    Debugger debugger;

    auto elapsed = debugger.time_elapsed();                                                                             //set elapsed variable to the elapsed time from the clock function
    cout << "program ran in " << chrono::duration_cast<chrono::nanoseconds>(elapsed).count() << "ns" << endl;

    debugger.outputInfo();

    return 0;
}