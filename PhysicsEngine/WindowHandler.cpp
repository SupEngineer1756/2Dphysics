#include "WindowHandler.h"
#include <cassert>
WindowHandler::WindowHandler() {
	
}
void WindowHandler::initialize() {
	//Initialisation
	glfwInit();

	//Inform GLFW of used OpenGl version (3.3)
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//Inform GLFW use of the CORE profile
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}
void WindowHandler::assertWindowNotNull(GLFWwindow* window) {
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
	}
}
void WindowHandler::introduction(GLFWwindow* window) {
	//Introduction of the window into the current context
		glfwMakeContextCurrent(window);
		//Load GLAD
		gladLoadGL();
		glViewport(0, 0, 1500, 1500);
	
}
void WindowHandler::terminate(GLFWwindow* window) {
	glfwDestroyWindow(window);
	glfwTerminate();

}
void WindowHandler::configureVBOandEBO(GLFWwindow* window,VBO VBO1, EBO EBO1, VAO VAO1, Shader shaderProgram) {
	
	
}