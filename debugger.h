//
// Created by Owen Powell on 12/11/18.
//

#ifndef FINALPROJECT_DEBUGGER_H
#define FINALPROJECT_DEBUGGER_H

#include <iostream>
#include <fstream>
#include <chrono>

class Debugger {
private:
    typedef std::chrono::high_resolution_clock Clock;
    Clock::time_point epoch;

    int count;

public:
    Debugger(){
        epoch = Clock::now();                                                                                           //sets epoch to current time
    }
    Clock::duration time_elapsed() { return Clock::now() - epoch; }                                                     //returns time elapsed since program began running

    int outputInfo() {                                                                                                  //function to output debug info
        std::ofstream outputStream;                                                                                     //debug info output file stream
        outputStream.open("finalDebugInfo.txt");                                                                        //open file to write data to
        auto elapsed = time_elapsed();                                                                                  //give the "elapsed" variable a value
        outputStream << "The program ran in " << std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count() << " nanoseconds" << std::endl;
        outputStream.close();                                                                                           //close file
    }
};


#endif //FINALPROJECT_DEBUGGER_H
