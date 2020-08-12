#include"stdafx.h"
#include"Console.h"
#include"Application.h"
#include"Scene.h"

INT WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR, INT cmdShow) {
	srand(GetTickCount());

	Console console;
	Application app;

	if (CONSOLE_OFF) {
		console.CloseConsole();
	}

	app.InitWindow(hinstance);
	app.InitD3D(app.FloatWindow(hinstance, cmdShow));

	return app.DoMainLoop(new Scene());
}