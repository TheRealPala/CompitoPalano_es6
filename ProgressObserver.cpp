//
// Created by ale on 27/06/23.
//

#include <iostream>
#include "ProgressObserver.h"

void ProgressObserver::update() {
    if(!subject->isFinished()){
        std::cout << "Progress: " << subject->getPercentage() << "%" << std::endl;
    }
}

ProgressObserver::~ProgressObserver() {
    subject->unscribe(this);
}
