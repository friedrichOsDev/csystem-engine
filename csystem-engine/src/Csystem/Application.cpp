#include "Application.h"

#include "Csystem/Events/ApplicationEvent.h"
#include "Csystem/Events/MouseEvent.h"
#include "Csystem/Log.h"

namespace Csystem {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		MouseMovedEvent m(1.2, 3.4);
		CS_TRACE(e.ToString());
		CS_TRACE(m.ToString());

		while (true);
	}

}