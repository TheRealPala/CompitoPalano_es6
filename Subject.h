//
// Created by ale on 27/06/23.
//

#ifndef COMPITOPALANO_ES6_SUBJECT_H
#define COMPITOPALANO_ES6_SUBJECT_H


class Subject {
public:
    virtual void unscribe(Observer* o) = 0;
    virtual void subscribe(Observer* o) = 0;
    virtual void notify() = 0;
    virtual ~Subject(){};
};


#endif //COMPITOPALANO_ES6_SUBJECT_H
