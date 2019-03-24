//
// Created by ahmed on 3/23/19.
//

#ifndef COMPILER_GENERATOR_STATE_H
#define COMPILER_GENERATOR_STATE_H

#include <map>
#include <vector>
#include "Rule.h"

using namespace std;

class State
{

public:
    State(int id);
    //State();
    virtual ~State();

    void add_transition(char input, State* to_state);
    vector<State*> get_transition(char input);


    /* setters and getters */
    void set_acceptance(bool value);
    bool is_acceptance();
    /*
    void set_matched_rule(Rule matched_rule);
    Rule get_matched_rule(void);
    */
    bool operator==(State s);           /*****************************/
    map<char, vector<State*> > getAllTransitions();
    int get_id();

private:
    map<char, vector<State*> > transitions;
    bool acceptance_state;
    //Rule matched_rule = Rule("", "", 0);
    int id;
};


#endif //COMPILER_GENERATOR_STATE_H