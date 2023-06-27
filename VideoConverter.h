//
// Created by ale on 27/06/23.
//

#ifndef COMPITOPALANO_ES6_VIDEOCONVERTER_H
#define COMPITOPALANO_ES6_VIDEOCONVERTER_H


#include <list>
#include <vector>
#include "Subject.h"
#include "Observer.h"
#include "Video.h"

class VideoConverter : public Subject {
private:
    std::list<Observer*> observers;
    std::vector<Video*> videos;
    std::vector<std::string> formatsToConvert;
    bool finished;
    float percentage;
public:
    VideoConverter(): finished(false), percentage(0){};
    void subscribe(Observer* o) override;
    void unscribe(Observer* o) override;
    void notify() override;
    bool isFinished() const;
    float getPercentage() const;
    void addVideo(const Video& v, const std::string& format);
    void convert();
};


#endif //COMPITOPALANO_ES6_VIDEOCONVERTER_H
