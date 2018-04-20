//
// Created by iddqd13 on 4/20/18.
//

#ifndef HFSM_STATES_H
#define HFSM_STATES_H

#include <memory>

#include <include/types.h>

/**
 * Second approach:
 * using inheritance method:
 * base class define only prototypes;
 * Macrostate can implement some general methods
 * ConcreteState must implement specific methods.
 *
 * TODO: generate methods.
 *
 * **/


/** forward declaration of StateHandler for using on BaseState classes **/
class StateHandler;

/** Base interface for State inteface **/
class BaseState {
public:
    /** typedef for smart pointers **/
    typedef std::unique_ptr<BaseState> UniPtr;
public:

    BaseState() = default;
    virtual ~BaseState() = default;

    /** main method for processing message. **/
    virtual void processMessage(Message msg , StateHandler* handler ) = 0;
};

/** SuperState(MacroState) class for **/
class MacroStateA : public BaseState {
public:
    /** static method for creating state **/
    static BaseState::UniPtr create() {
        return std::make_unique<MacroStateA>();
    }

public:
    MacroStateA() = default;
    virtual ~MacroStateA() = default;

    /** override base method for process some message **/
    virtual void processMessage(Message msg , StateHandler* handler ) override ;
};


/** SuperState(MacroState) class for **/
class MacroStateB : public BaseState {
public:
    /** static method for creating state **/
    static BaseState::UniPtr create() {
        return std::make_unique<MacroStateB>();
    }

public:
    MacroStateB() = default;
    virtual ~MacroStateB() = default;

    /** override base method for process some message **/
    virtual void processMessage(Message msg , StateHandler* handler ) override ;
};

/** Concrete State class **/
class ConcreteStateA : public MacroStateA {
public:
    /** static method for creating state **/
    static BaseState::UniPtr create() {
        return std::make_unique<ConcreteStateA>();
    }

public:
    ConcreteStateA() = default;
    virtual ~ConcreteStateA() = default;

    /** override base method for process some message **/
    virtual void processMessage(Message msg , StateHandler* handler ) override ;
};




/** Concrete State class **/
class ConcreteStateB : public MacroStateA {
public:
    /** static method for creating state **/
    static BaseState::UniPtr create() {
        return std::make_unique<ConcreteStateB>();
    }

public:
    ConcreteStateB() = default;
    virtual ~ConcreteStateB() = default;

    /** override base method for process some message **/
    virtual void processMessage(Message msg , StateHandler* handler ) override ;
};


#endif //HFSM_STATES_H
