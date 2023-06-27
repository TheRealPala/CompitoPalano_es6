//
// Created by ale on 27/06/23.
//

#ifndef COMPITOPALANO_ES6_COMPLETIONOBSERVER_H
#define COMPITOPALANO_ES6_COMPLETIONOBSERVER_H


#include "VideoConverter.h"

class CompletionObserver : public Observer{
private:
    VideoConverter* subject;
public:
    CompletionObserver(VideoConverter *subject): subject(subject){
        subject->subscribe(this);
    };

    void update() override;
    ~CompletionObserver();
};


#endif //COMPITOPALANO_ES6_PROGRESSOBSERVER_H
