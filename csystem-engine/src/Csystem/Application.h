#pragma once

#include "Core.h"

namespace Csystem {

	class CSYSTEM_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}