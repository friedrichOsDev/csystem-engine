#pragma once

#ifdef CS_PLATFORM_WINDOWS

extern Csystem::Application* Csystem::CreateApplication();

int main(int argc, char** argv) {
	auto app = Csystem::CreateApplication();
	app->Run();
	delete app;
}

#endif // CS_PLATFORM_WINDOWS
