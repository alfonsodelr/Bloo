#include "Application.h"

#include "Bloo/Events/ApplicationEvent.h"
#include "Bloo/Log.h"

namespace Bloo{

	Application::Application() 
	{

	}

	Application::~Application() 
	{

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		BL_TRACE(e);

		while (true);
	}

}