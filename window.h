#pragma once

#include<string>
#include <SDL.h>


class window {
public:
	window(const std::string& title, int width, int height);
	~window();
	// make a function that tells when a user is making an input
	void userEvents();
	void clear() const;

	inline bool notRunning() const { return _closed; } // makes small functions efficient not good for big loops

private:
	bool init();

private:
	std::string _title;
	int _width = 800;
	int _height = 600;

	bool _closed = false;

	SDL_Window* _window = nullptr;
	SDL_Renderer* _renderer = nullptr;
};

