#ifndef GAME_H
#define GAME_H
#include "Includes.h"

struct Game
{
public:
	//Game(const char* title, const int WINDOW_WIDTH, const int WINDOW_HEIGHT, const int GL_VERSION_MAJOR, GL_VERSION_MINOR, bool resizable);
	Game();
	virtual ~Game();

	//operators

	//functions
	void mainMenu();
	void initGame();
	void createCharacter();
	void loadCharacter();
	void saveCharacter();
	void characterMenu();
	void selectCharacter();

	//accessor
	inline bool getPlaying() const { return this->playing;  }

private:
	//constants
	int choice;
	bool playing;

	int activeCharacter;
	std::vector<Character> characters;
	std::string filename;
	char nameBuf[256];
	char descBuf[256];
		/*const int WINDOW_WIDTH;
		* const int WINDOW_HEIGHT;
		* int framebufferWidth;
		* int framebufferHeight;
		* const int GL_VERSION_MAJOR;
		* const int GL_VERSION_MINOR;
		* 
		*/
	//private operators
	/*void initGLGW();
	* void initWindow(const char * title, bool resizeable);
	* initGlad();
	* initUI*/
	//private functions
};
#endif