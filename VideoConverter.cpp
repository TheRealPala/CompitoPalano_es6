//
// Created by ale on 27/06/23.
//

#include "VideoConverter.h"

void VideoConverter::subscribe(Observer *o) {
    observers.push_back(o);
}

void VideoConverter::unscribe(Observer *o) {
    observers.remove(o);
}

void VideoConverter::notify() {
    for(const auto& el : observers){
        el->update();
    }
}

bool VideoConverter::isFinished() const {
    return finished;
}

float VideoConverter::getPercentage() const {
    return percentage;
}

void VideoConverter::addVideo(const Video &v, const std::string &format) {
    videos.push_back(new Video(v));
    formatsToConvert.push_back(format);
}

void VideoConverter::convert() {
    //conversione al 20%
    percentage = 20;
    notify();
    //conversione al 80%
    percentage = 80;
    notify();
    percentage = 100;
    finished = true;
    notify();
    int i = 0;
    for(const auto& el : videos){
        el->setFormat(formatsToConvert[i]);
        i++;
    }
}
