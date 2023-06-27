//
// Created by ale on 27/06/23.
//

#include <iostream>
#include "CompletionObserver.h"

void CompletionObserver::update() {
    if(subject->isFinished()){
       std::cout << "Conversion Completed!" << std::endl;
    }
}

CompletionObserver::~CompletionObserver() {
    subject->unscribe(this);
}