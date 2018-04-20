//
// Created by iddqd13 on 4/15/18.
//

#ifndef HFSM_FSM_FR_H
#define HFSM_FSM_FR_H

#include <functional>
#include <memory>

#include <include/States.h>
#include <include/StateHandler.h>

/**
 *  This is first redaction.
 *  hardcoded write hierarchical finite-state machine for understanding.
 *  after it. TODO: think about implementation with template classes or
 *  some std::bind|lambdas|functors using
 */

/**
 * template class for FiniteState
 * @tparam FnType
 */
class FiniteStateMachine {
public:
    typedef std::unique_ptr<FiniteStateMachine> UniquePtr;
    static UniquePtr create(BaseState::UniPtr initialState) {
        return std::make_unique<FiniteStateMachine>(std::forward(initialState));
    }
public:
    FiniteStateMachine() = delete;

    explicit FiniteStateMachine(BaseState::UniPtr initialState) :
            m_stateHandler( StateHandler::create(std::move(initialState))) { }

    void ProccessMsg(Message msg) {
        m_stateHandler->state()->processMessage( msg , m_stateHandler.get() );
    }

private:
    StateHandler::UniPtr m_stateHandler;
};

#endif //HFSM_FSM_FR_H
