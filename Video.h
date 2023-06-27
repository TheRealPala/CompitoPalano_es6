//
// Created by ale on 27/06/23.
//

#ifndef COMPITOPALANO_ES6_VIDEO_H
#define COMPITOPALANO_ES6_VIDEO_H


#include <string>

class Video {
private:
    std::string name;
    std::string format;
public:
    void setFormat(const std::string &format);

public:
    Video(const std::string &name, const std::string &format);
};


#endif //COMPITOPALANO_ES6_VIDEO_H
