#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Csystem {

	class CSYSTEM_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CS_CORE_TRACE(...) ::Csystem::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CS_CORE_INFO(...)  ::Csystem::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CS_CORE_WARN(...)  ::Csystem::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CS_CORE_ERROR(...) ::Csystem::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CS_CORE_FATAL(...) ::Csystem::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CS_TRACE(...) ::Csystem::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CS_INFO(...)  ::Csystem::Log::GetClientLogger()->info(__VA_ARGS__)
#define CS_WARN(...)  ::Csystem::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CS_ERROR(...) ::Csystem::Log::GetClientLogger()->error(__VA_ARGS__)
#define CS_FATAL(...) ::Csystem::Log::GetClientLogger()->fatal(__VA_ARGS__)