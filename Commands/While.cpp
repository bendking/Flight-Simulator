//
// Created by ben on 12/15/18.
//

#include "While.h"

void While::execute()
{
    // if condition true, execute all commands in sequence and loop back
    while (conditionTrue()) {
        for (Command* command : commands) {
            command->execute();
        }
    }
}