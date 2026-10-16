#include "cspch.h"
#include "Application.h"

#include "Csystem/Events/ApplicationEvent.h"
#include "Csystem/Log.h"

namespace Csystem {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		CS_TRACE(e.ToString());

		while (true);
	}

}