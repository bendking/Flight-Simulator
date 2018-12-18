//
// Created by ben on 12/15/18.
//

#include "While.h"

void While::execute() {
    if (conditionTrue()) {
        for (Command* command : commands) {
            command->execute();
        }

        // While back
        execute();
    }
}