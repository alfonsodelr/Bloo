#pragma once

#ifdef BL_PLATFORM_WINDOWS

extern Bloo::Application* Bloo::CreateApplication();

int main(int argc, char ** argv)
{

	int a = 5;

	Bloo::Log::Init();

	BL_CORE_WARN("Initialized Log!");
	BL_INFO("Hello! Var={0}", a);

	auto app = Bloo::CreateApplication();
	app->Run();
	delete app;

}

#endif