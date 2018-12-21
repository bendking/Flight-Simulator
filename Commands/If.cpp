//
// Created by ben on 12/15/18.
//

#include "If.h"

void If::execute()
{
    // If condition applies, execute all commands in sequence
    if (conditionTrue()) {
        for (Command* command : commands) {
            command->execute();
        }
    }
}