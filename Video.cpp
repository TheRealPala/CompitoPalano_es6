//
// Created by ale on 27/06/23.
//

#include "Video.h"

Video::Video(const std::string &name, const std::string &format) : name(name), format(format) {}

void Video::setFormat(const std::string &format) {
    Video::format = format;
}
