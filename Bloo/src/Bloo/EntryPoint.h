#pragma once

#ifdef BL_PLATFORM_WINDOWS

extern Bloo::Application* Bloo::CreateApplication();

int main(int argc, char ** argv)
{

	printf("Bloo Engine\n");
	auto app = Bloo::CreateApplication();
	app->Run();
	delete app;

}

#endif