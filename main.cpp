#include "window.h"

int main(int argc, char** argv) {
	window window("Shape Vortex", 800, 600);

	while (!window.notRunning()) {
		window.userEvents();
		window.clear();
	}
	return 0;
}
