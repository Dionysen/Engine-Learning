target("imgui-docking")
	set_kind("static")

	add_packages("glfw")

	add_includedirs(".", "./impl_glfw", {public = true})
	add_files("./*.cpp", "./impl_glfw/*.cpp")

	add_defines("IMGUI_IMPL_OPENGL_LOADER_GLEW")