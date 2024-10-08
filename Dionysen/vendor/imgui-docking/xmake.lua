target("imgui-docking")
	set_kind("static")

	add_packages("glfw")

	add_includedirs(".", "./impl_glfw", "./impl_win32",{public = true})
	add_files("./*.cpp", "./impl_glfw/*.cpp", "./impl_win32/*.cpp")

	add_defines("IMGUI_IMPL_OPENGL_LOADER_GLEW")