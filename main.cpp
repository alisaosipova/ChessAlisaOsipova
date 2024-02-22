#define TEST_LEGAL_MOVE_GENERATOR false
#define SHOW_UI true


#if TEST_LEGAL_MOVE_GENERATOR
#include "LegalMoveGenTester.h"
#endif
#if SHOW_UI
#include "UI.h"
#endif


int main() {
#if TEST_LEGAL_MOVE_GENERATOR
    LegalMoveGenTester::runTests();
#endif
#if SHOW_UI
    UI ui;
    ui.start();
#endif

    return 0;
}