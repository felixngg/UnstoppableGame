#include "Engine.h"

int main(int arc, char* argv[])
{
    PowderEngine::Engine* e = new PowderEngine::Engine();
	e->init();

	delete e;
    return 0;
}
