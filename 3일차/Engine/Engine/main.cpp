#include"stdafx.h"
#include"Console.h"
#include"Application.h"
#include"Scene.h"

INT WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR, INT cmdShow) {
	srand(GetTickCount());


	Application app;

	std::cout << "¾È³ç";

	app.InitWindow(hinstance);
	app.InitD3D(app.FloatWindow(hinstance, cmdShow));

	return app.DoMainLoop(new Scene());
}