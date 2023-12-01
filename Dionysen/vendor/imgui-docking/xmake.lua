target("imgui-docking")
	set_kind("static")

	add_packages("glfw")

	add_includedirs(".", {public = true})
	add_files("./*.cpp")