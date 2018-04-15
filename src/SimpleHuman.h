//
// Created by iddqd13 on 4/15/18.
//

#ifndef HFSM_SIMPLEHUMAN_H
#define HFSM_SIMPLEHUMAN_H

#include <iostream>

#include <FSM_FR.h>

class SimpleHuman {
public:
    SimpleHuman(){
        m_fsmachine = FiniteStateMachine::create( goToCorridore );
    }

    void goToCorridore(Message msg) {
        std::cout <<  "On Corridore..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
        case Message::Eat:
        break;
        case Message::Park:
        break;
        case Message::Sleep:
        break;
        case Message::Work:
        break;
        }
    }
    void goToBedroom(Message msg) {
        std::cout <<  "On Bedroom..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
        case Message::Eat:
        break;
        case Message::Park:
        break;
        case Message::Sleep:
        break;
        case Message::Work:
        break;
        }
    }
    void goToKitchen(Message msg) {
        std::cout <<  "On Kitchen..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
        case Message::Eat:
        break;
        case Message::Park:
        break;
        case Message::Sleep:
        break;
        case Message::Work:
        break;
        }
    }
    void goToStreet(Message msg) {
        std::cout <<  "On Street..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
        case Message::Eat:
        break;
        case Message::Park:
        break;
        case Message::Sleep:
        break;
        case Message::Work:
        break;
        }
    }
    void goToPark(Message msg) {
        std::cout <<  "On Park..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
        case Message::Eat:
        break;
        case Message::Park:
        break;
        case Message::Sleep:
        break;
        case Message::Work:
        break;
        }
    }
    void goToWork(Message msg) {
        std::cout <<  "On Work..." << std::endl;
        std::cout <<  "do something with message..." << std::endl;
        switch( msg ) {
            case Message::Eat:
            break;
            case Message::Park:
            break;
            case Message::Sleep:
            break;
            case Message::Work:
            break;
        }
    }

private:
    FiniteStateMachine::UniquePtr m_fsmachine;
};

#endif //HFSM_SIMPLEHUMAN_H
