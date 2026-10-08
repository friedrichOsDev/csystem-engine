#pragma once

#ifdef CS_PLATFORM_WINDOWS

extern Csystem::Application* Csystem::CreateApplication();

int main(int argc, char** argv) {
	Csystem::Log::Init();
	CS_CORE_WARN("Initialized Log!");
	int a = 5;
	CS_INFO("Hello! Var={0}", a);

	auto app = Csystem::CreateApplication();
	app->Run();
	delete app;
}

#endif // CS_PLATFORM_WINDOWS
