//
// Created by iddqd13 on 4/15/18.
//

#ifndef HFSM_FSM_FR_H
#define HFSM_FSM_FR_H

#include <functional>
#include <memory>

/**
 *  This is first redaction.
 *  hardcoded write hierarchical finite-state machine for understanding.
 *  after it. TODO: think about implementation with template classes or
 *  some std::bind|lambdas|functors using
 */

enum class Message {
    Eat, Sleep , Work , Park
};

typedef std::function<void(Message)> StateFunc;

/**
 * template class for FiniteState
 * @tparam FnType
 */
class FiniteStateMachine {
public:
    typedef std::unique_ptr<FiniteStateMachine> UniquePtr;
    static UniquePtr create(StateFunc initialState ) {
        return std::make_unique<FiniteStateMachine>(std::forward(initialState));
    }
public:
    FiniteStateMachine() = delete;

    explicit FiniteStateMachine(StateFunc initialState ) :
    m_currentState{std::move(initialState)} { }

    void ProccessMsg(Message msg) {
        if ( m_currentState ) {
            m_currentState(msg);
        }
    }

    void changeState(StateFunc newState) {
        m_currentState = std::move(newState);
    }

private:
    StateFunc m_currentState;
};

#endif //HFSM_FSM_FR_H
