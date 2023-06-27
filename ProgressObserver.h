//
// Created by ale on 27/06/23.
//

#ifndef COMPITOPALANO_ES6_PROGRESSOBSERVER_H
#define COMPITOPALANO_ES6_PROGRESSOBSERVER_H


#include "VideoConverter.h"

class ProgressObserver : public Observer{
private:
    VideoConverter* subject;
public:
    ProgressObserver(VideoConverter *subject): subject(subject){
        subject->subscribe(this);
    };

    void update() override;
    ~ProgressObserver();
};


#endif //COMPITOPALANO_ES6_PROGRESSOBSERVER_H
