//
// Created by ben on 12/15/18.
//

#include "If.h"

void If::execute() {
    if (conditionTrue()) {
        for (Command* command : commands) {
            command->execute();
        }
    }
}