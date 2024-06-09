workspace "MyWorkspace"
    configurations { "Debug", "Release" }
project "Dionysen-ScriptCore"
	kind "SharedLib"
	language "C#"
	dotnetframework "4.8.1"

	targetdir ("../Resources/Scripts")
	objdir ("../Resources/Scripts/Intermediates")

	files 
	{
		"Source/**.cs",
		"Properties/**.cs"
	}
	
	filter "configurations:Debug"
		optimize "Off"
		symbols "Default"

	filter "configurations:Release"
		optimize "On"
		symbols "Default"

	filter "configurations:Dist"
		optimize "Full"
		symbols "Off"
