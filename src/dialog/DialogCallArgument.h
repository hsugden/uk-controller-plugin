#pragma once
#include "pch/stdafx.h"

namespace UKControllerPlugin {
    namespace Dialog {

        /*
            A struct to represent the call of a dialog - the data that the dialog
            needs to operate (e.g. the pointer to a handler class of some sort) and also
            any contextual data (e.g. possibly a pointer to some other class that it needs
            to interact with).
        */
        typedef struct DialogCallArgument {

            // The argument that the dialog procedure needs - e.g. to defer to a class.
            const LPARAM dialogArgument;

            // An argument that provides the context in which the dialog is being loaded
            const LPARAM contextArgument;

        } DialogCallArgument;

    }  // namespace Dialog
}  // namespace UKControllerPlugin
