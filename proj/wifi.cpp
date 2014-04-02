#include "wifi.h"
#include <cstdio>
#include <iostream>
#include <string>

void Wifi::wifi()
{
}

std::string Wifi::raw(void)
{
    std::string output = "";
    char* cmd = "nm-tool | grep -i Strength | sort";        //TODO fix hard coding

    FILE* pipe = popen(cmd, "r");
    if (!pipe) return "ERROR";
        char buffer[128];
    while(!feof(pipe)) {
        if(fgets(buffer, 128, pipe) != NULL)
                output += buffer;
    }
    pclose(pipe);

    return output;
}
