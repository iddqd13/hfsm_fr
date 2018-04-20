//
// Created by iddqd13 on 4/20/18.
//

#ifndef HFSM_STATEHANDLER_H
#define HFSM_STATEHANDLER_H

#include <include/States.h>

/** Class for handling and control States **/
class StateHandler {
public:
    typedef std::unique_ptr<StateHandler> UniPtr;

    /** static method for creating StateHandler **/
    static UniPtr create(BaseState::UniPtr initialState) {
        return std::make_unique<StateHandler>(std::forward(initialState));
    }

public:
    /** default constructor is deprecated.
     * We must from start set initial State **/
    StateHandler() = delete;

    /** Initial constructor with start State.
     * StateHandler take ownership **/
    explicit StateHandler(BaseState::UniPtr initialState) :
    m_currentState{std::move(initialState)} { }

    /** return pointer to BaseState object
     *  DON'T REMOVE Object! StateHandler has ownership! **/
    BaseState* state() { return m_currentState.get(); }

    /** overloaded function.
     *  Release ( with deleteting) old state
     *  and take ownership for newState **/
    void setState( BaseState::UniPtr newState ) {
        m_currentState = std::move( newState );
    }
    void setState( BaseState* newState ) {
        m_currentState.reset( newState );
    }

private:
    BaseState::UniPtr m_currentState;
};

#endif //HFSM_STATEHANDLER_H
